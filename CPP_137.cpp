#include <boost/any.hpp>
#include <string>
#include <iostream>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a < (float) b ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        std::string str = boost::any_cast<std::string>(b);
        float f = boost::any_cast<float>(a);
        return f > atof(str.c_str()) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        return str1 > str2 ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = boost::any_cast<int>(a);
        int i2 = boost::any_cast<int>(b);
        return i1 < i2 ? b : a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float f = boost::any_cast<float>(b);
        return atof(str.c_str()) > f ? a : b;
    }
    else {
        return "None";
    }
}