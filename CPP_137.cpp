#include <boost/any.hpp>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(a) > boost::any(b)
            ? a
            : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b)
            ? a
            : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a)
            ? b
            : boost::any(std::to_string(a));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<float>(b)
            ? a
            : boost::any(std::to_string(b));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string a_str = boost::any_cast<std::string>(a);
        std::string b_str = boost::any_cast<std::string>(b);
        return std::stod(b_str) > std::stod(a_str)
            ? a
            : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        return std::stod(boost::any_cast<std::string>(b)) > boost::any_cast<float>(a)
            ? b
            : boost::any(std::to_string(a));
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return boost::any_cast<float>(a) > std::stod(boost::any_cast<std::string>(b))
            ? a
            : boost::any(std::to_string(b));
    }
    return boost::any("None");
}