#include <iostream>
#include <boost/any.hpp>
#include <boost/convert.hpp>
#include <string>

bool compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a > (double) b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double) a > (int) b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string s1 = boost::any_cast<std::string>(a);
        std::string s2 = boost::any_cast<std::string>(b);
        double n1 = std::stod(s1);
        double n2 = std::stod(s2);
        return n1 > n2;
    }
    else if (a.type() == typeid(std::string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        std::string s = boost::any_cast<std::string>(a);
        double n = std::stod(s);
        return n > boost::any_cast<int>(b);
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(std::string)) {
        double n1 = boost::any_cast<double>(a);
        std::string s2 = boost::any_cast<std::string>(b);
        double n2 = std::stod(s2);
        return n1 > n2;
    }
    else if (a.type() == typeid(int) && a.convert_to<int>() == a.convert_to<double>()) {
        return true;
    }
    else if (a.type() == typeid(double) && a.convert_to<double>() == a.convert_to<int>()) {
        return true;
    }
    else if (a.type() == typeid(std::string) && boost::any_cast<std::string>(a).find('.') == std::string::npos) {
        return true;
    }
    return false;
}