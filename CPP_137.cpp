#include <boost/any.hpp>
#include <iostream>
#include <string>
#include <stdexcept>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<int>(a) > boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<int>(a) > boost::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        std::string str = boost::any_cast<std::string>(b);
        int num = boost::any_cast<int>(a);
        return num > std::stoi(str) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return std::stoi(str) > num ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any_cast<float>(a) > boost::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float num = boost::any_cast<float>(b);
        return std::stof(str) > num ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str = boost::any_cast<std::string>(a);
        double num = boost::any_cast<double>(b);
        return std::stod(str) > num ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        std::string str = boost::any_cast<std::string>(b);
        int num = boost::any_cast<int>(a);
        return num < std::stoi(str) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<int>(a) < boost::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        std::string str = boost::any_cast<std::string>(b);
        float num = boost::any_cast<float>(a);
        return num < std::stof(str) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        std::string str = boost::any_cast<std::string>(b);
        double num = boost::any_cast<double>(a);
        return num < std::stod(str) ? a : b;
    } else {
        throw std::runtime_error("Invalid types");
    }
}