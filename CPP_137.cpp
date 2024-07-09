```
#include <boost/any.hpp>
#include <iostream>
#include <string>
#include <stdexcept>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(a.cast_to<int>() > boost::any_cast<float>(b));
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(a.cast_to<int>() > boost::any_cast<double>(b));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return boost::any(stoi(str) > num);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(boost::any_cast<float>(a) > static_cast<double>(b));
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any(boost::any_cast<double>(a) > static_cast<double>(b));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float num = boost::any_cast<float>(b);
        return boost::any(stof(str) > num);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str = boost::any_cast<std::string>(a);
        double num = boost::any_cast<double>(b);
        return boost::any(stod(str) > num);
    }
    return "None";
}