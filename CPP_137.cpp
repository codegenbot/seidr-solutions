#include <iostream>
#include <string>
#include <boost/any.hpp>

template <typename T>
boost::any compare_one(const T& a, const T& b) {
    if (a > b) {
        return boost::any(a);
    } else if (a < b) {
        return boost::any(b);
    }
    return boost::any();
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::to_string(1))) == "");
    
    return 0;
}