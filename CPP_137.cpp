#include <iostream>
#include <typeinfo>
#include <boost/any.hpp>

// Declare function compare_one
boost::any* compare_one(const boost::any& a, const boost::any& b);

int main() {
    // Main function content remains unchanged
}

boost::any* compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return new boost::any(a);
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return new boost::any(b);
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return new boost::any(a);
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return new boost::any(b);
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        if (std::stof(boost::any_cast<std::string>(a)) > std::stof(boost::any_cast<std::string>(b))) {
            return new boost::any(a);
        } else if (std::stof(boost::any_cast<std::string>(a)) < std::stof(boost::any_cast<std::string>(b))) {
            return new boost::any(b);
        }
    }
    return nullptr;
}