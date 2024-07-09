#include <boost/any.hpp>
#include <iostream>
#include <string>
#include <stdexcept>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return ((int)boost::any_cast<int>(a) > (float)boost::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return ((int)boost::any_cast<int>(a) > (double)boost::any_cast<double>(b)) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        std::string str = boost::any_cast<std::string>(b);
        int num = boost::any_cast<int>(a);
        return (num > std::stoi(str)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return ((float)boost::any_cast<float>(a) > (int)boost::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return ((double)boost::any_cast<double>(a) > (int)boost::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return (std::stoi(str) > num) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return ((float)boost::any_cast<float>(a) > (double)boost::any_cast<double>(b)) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float num = (float)boost::any_cast<float>(b);
        return (std::stof(str) > num) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str = boost::any_cast<std::string>(a);
        double num = boost::any_cast<double>(b);
        return (std::stod(str) > num) ? a : b;
    }
    throw std::runtime_error("Unsupported types");
}