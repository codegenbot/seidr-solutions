#include <iostream>
#include <string>
#include < boost/any.hpp>

std::string compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return std::to_string((int)a) > std::to_string((float)b) ? "a" : "b";
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return std::to_string((int)a) > std::to_string((double)b) ? "a" : "b";
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return str > std::to_string(num) ? "a" : "b";
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return std::to_string((float)a) > std::to_string((int)b) ? "a" : "b";
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return std::to_string((double)a) > std::to_string((int)b) ? "a" : "b";
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float num = boost::any_cast<float>(b);
        return str > std::to_string(num) ? "a" : "b";
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        std::string str = boost::any_cast<std::string>(a);
        double num = boost::any_cast<double>(b);
        return str > std::to_string(num) ? "a" : "b";
    } else {
        return "None";
    }
}