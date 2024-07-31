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
    assert(boost::any_cast<std::string>(compare_one(boost::any(std::string("1")), boost::any(std::to_string(1))).empty());
    
    return 0;
}