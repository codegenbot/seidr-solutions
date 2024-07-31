#include <iostream>
#include <string>
#include <cassert>
#include <boost/any.hpp>

template <typename T>
std::string compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return "None";
}

int main() {
    assert(compare_one(boost::any_cast<std::string>(std::string("1")), boost::any_cast<std::string>(std::to_string(1))) == "None");

    return 0;
}