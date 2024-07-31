#include <iostream>
#include <string>
#include <boost/any.hpp> // Include the <boost/any.hpp> header

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
    assert(compare_one(boost::any_cast<std::string>(std::string("1")), boost::any_cast<std::string>(std::to_string(1))).empty());

    return 0;
}