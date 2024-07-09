#include <boost/any.hpp>
#include <iostream>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(a.convert_to<int>() > boost::any_cast<int>(b)
            ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any(a.convert_to<float>() > boost::any_cast<float>(b)
            ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b.convert_to<float>() > boost::any_cast<int>(a)
            ? b : boost::any(std::to_string(a.convert_to<int>()));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(a.convert_to<float>() > boost::any_cast<int>(b)
            ? a : boost::any(std::to_string(b.convert_to<int>()));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string a_str = boost::any_cast<std::string>(a);
        std::string b_str = boost::any_cast<std::string>(b);
        return boost::any(stod(b_str) > stod(a_str)
            ? b : a;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        return boost::any(stod(boost::any_cast<std::string>(b)) > boost::any_cast<float>(a)
            ? b : boost::any(std::to_string(a.convert_to<int>()));
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return boost::any(boost::any_cast<float>(a) > stod(boost::any_cast<std::string>(b))
            ? a : boost::any(std::to_string(b.convert_to<int>()));
    }
    return boost::any("None");
}