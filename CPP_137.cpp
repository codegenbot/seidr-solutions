#include <iostream>
#include <string>
#include <cassert>
#include <boost/any.hpp>

template <typename T>
std::string compare_one(const boost::any& a, const boost::any& b) {
    if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
        return boost::any_cast<T>(a);
    } else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
        return boost::any_cast<T>(b);
    }
    return "None";
}

int main() {
    assert(compare_one<std::string>(std::string("1"), std::to_string(1)) == "None");
    
    return 0;
}