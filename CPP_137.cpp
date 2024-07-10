#include <iostream>
#include <string>
#include <boost/variant.hpp>

boost::variant<int, double, std::string> compare_one(boost::variant<int, double, std::string> a, boost::variant<int, double, std::string> b) {
    if (boost::holds_alternative<int>(a) && boost::holds_alternative<double>(b)) {
        int num = boost::get<int>(a);
        double val = boost::get<double>(b);
        return num > val ? a : b;
    }
    else if (boost::holds_alternative<double>(a) && boost::holds_alternative<int>(b)) {
        double num = boost::get<double>(a);
        int val = boost::get<int>(b);
        return num > val ? a : b;
    }
    else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<double>(b)) {
        std::string str = boost::get<std::string>(a);
        double val = boost::get<double>(b);
        return str > std::to_string(val) ? a : b;
    }
    else if (boost::holds_alternative<double>(a) && boost::holds_alternative<std::string>(b)) {
        double num = boost::get<double>(a);
        std::string val = boost::get<std::string>(b);
        return std::to_string(num) > val ? a : b;
    }
    else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<std::string>(b)) {
        std::string str1 = boost::get<std::string>(a);
        std::string str2 = boost::get<std::string>(b);
        return str1 > str2 ? a : b;
    }
    else if (boost::holds_alternative<int>(a) && boost::holds_alternative<std::string>(b)) {
        int num = boost::get<int>(a);
        std::string val = boost::get<std::string>(b);
        return std::to_string(num) > val ? a : b;
    }
    else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<int>(b)) {
        std::string str = boost::get<std::string>(a);
        int num = boost::get<int>(b);
        return str > std::to_string(num) ? a : b;
    }
    else if (boost::holds_alternative<double>(a) && boost::holds_alternative<double>(b)) {
        double num1 = boost::get<double>(a);
        double num2 = boost::get<double>(b);
        return num1 > num2 ? a : b;
    }
    else {
        return a;
    }
}