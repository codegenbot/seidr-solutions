```cpp
#include <boost/any.hpp>
#include <string>
#include <iostream>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        std::string str_a = boost::any_cast<std::string>(a);
        int int_b = boost::any_cast<int>(b);
        if (std::stod(str_a) > int_b) {
            return a;
        } else if (std::stod(str_a) < int_b) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        std::string str_a = boost::any_cast<std::string>(a);
        double dbl_b = boost::any_cast<double>(b);
        if (std::stod(str_a) > dbl_b) {
            return a;
        } else if (std::stod(str_a) < dbl_b) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        if (std::stod(str_a) > std::stod(str_b)) {
            return a;
        } else if (std::stod(str_a) < std::stod(str_b)) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int int_a = boost::any_cast<int>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        if (int_a > std::stod(str_b)) {
            return a;
        } else if (int_a < std::stod(str_b)) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double dbl_a = boost::any_cast<double>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        if (dbl_a > std::stod(str_b)) {
            return a;
        } else if (dbl_a < std::stod(str_b)) {
            return b;
        } else {
            return "None";
        }
    } else {
        int int_a = boost::any_cast<int>(a);
        int int_b = boost::any_cast<int>(b);
        if (int_a > int_b) {
            return a;
        } else if (int_a < int_b) {
            return b;
        } else {
            return "None";
        }
    }
}