```cpp
#include <boost/any.hpp>
#include <string>
#include <iostream>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int ia = boost::any_cast<int>(a);
        double ib = boost::any_cast<double>(b);
        if (ib > ia) {
            return b;
        } else if (ib < ia) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        double ia = boost::any_cast<double>(a);
        int ib = boost::any_cast<int>(b);
        if (ib > ia) {
            return b;
        } else if (ib < ia) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string s1 = boost::any_cast<std::string>(a);
        std::string s2 = boost::any_cast<std::string>(b);
        int i1 = std::stoi(s1);
        int i2 = std::stoi(s2);
        if (i2 > i1) {
            return b;
        } else if (i2 < i1) {
            return a;
        } else {
            return boost::any("None");
        }
    } else {
        int ia = boost::any_cast<int>(a);
        int ib = boost::any_cast<int>(b);
        if (ib > ia) {
            return b;
        } else if (ib < ia) {
            return a;
        } else {
            return boost::any("None");
        }
    }
}