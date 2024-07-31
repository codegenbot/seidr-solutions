#include <iostream>
#include <string>
#include <boost/any.hpp>

template <typename T>
T compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return T();
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::to_string(1))) == "");

    return 0;
}