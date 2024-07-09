```
#include <boost/any.hpp>
#include <iostream>
#include <string>
#include <stdexcept>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return ((int)boost::any_cast<int>(a) > boost::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return ((int)boost::any_cast<int>(a) > boost::any_cast<double>(b)) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return (std::stoi(str) > num) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return ((float)boost::any_cast<float>(a) > static_cast<float>(boost::any_cast<int>(b))) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return ((double)boost::any_cast<double>(a) > static_cast<double>(boost::any_cast<int>(b))) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float num = boost::any_cast<float>(b);
        return ((float)std::stof(str) > num) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        std::string str = boost::any_cast<std::string>(a);
        double num = boost::any_cast<double>(b);
        return ((double)std::stod(str) > num) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return ((int)boost::any_cast<int>(a) > boost::any_cast<double>(b)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (((float)boost::any_cast<float>(a)) > (double)boost::any_cast<double>(b)) ? a : b;
    } else {
        throw std::runtime_error("Unsupported types");
    }
}