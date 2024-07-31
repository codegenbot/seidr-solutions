#include <iostream>
#include <string>
#include <boost/any.hpp>

template <typename T>
T compare_one(const T& a, const T& b) {
    if (boost::any(a) > boost::any(b)) {
        return a;
    } else if (boost::any(a) < boost::any(b)) {
        return b;
    }
    return T();
}

int main() {
    assert(compare_one(std::string("1"), std::to_string(1)).empty());
    
    return 0;
}