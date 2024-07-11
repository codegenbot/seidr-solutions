#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <cassert>

template <typename T>
T max_value(const boost::any& a, const boost::any& b) {
    assert(a.type() == b.type());
    
    if (a.type() == typeid(T)) {
        if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
            return boost::any_cast<T>(a);
        } else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
            return boost::any_cast<T>(b);
        }
    }
    
    throw std::invalid_argument("Unsupported types");
}

int main() {
    boost::any a = 5;
    boost::any b = 7;
    
    try {
        int result = max_value<int>(a, b);
        std::cout << "Max value is: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}