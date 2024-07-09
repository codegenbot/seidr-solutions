```
#include <iostream>
#include <boost/any.hpp>
#include <boost/convert.hpp>

bool compareOne(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<int>(a) > boost::any_cast<double>(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > boost::any_cast<int>(b);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string s1 = boost::any_cast<std::string>(a);
        std::string s2 = boost::any_cast<std::string>(b);
        return std::stod(s1) > std::stod(s2);
    }
    else if (a.type() == typeid(std::string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        std::string s = boost::any_cast<std::string>(a);
        double n = std::stod(s);
        return n > boost::any_cast<int>(b);
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(std::string)) {
        double n1 = boost::any_cast<double>(a);
        std::string s2 = boost::any_cast<std::string>(b);
        return n1 > std::stod(s2);
    }
    else if (a.type() == typeid(int) && a.convert_to<int>() == a.convert_to<double>()) {
        return false;
    }
    else if (a.type() == typeid(double) && a.convert_to<double>() == a.convert_to<int>()) {
        return false;
    }
    else if (a.type() == typeid(std::string) && boost::any_cast<std::string>(a).find('.') == std::string::npos) {
        return false;
    }
    return true;
}