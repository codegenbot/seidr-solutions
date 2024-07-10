#include <iostream>
#include <string>
#include <boost/variant.hpp>

boost::variant<int, double, std::string> compare_one(boost::variant<int, double, std::string> a, boost::variant<int, double, std::string> b) {
    if (std::holds_alternative<int>(a) && std::holds_alternative<double>(b)) {
        return (std::get<int>(a) > std::get<double>(b)) ? a : b;
    }
    else if (std::holds_alternative<double>(a) && std::holds_alternative<int>(b)) {
        return (std::get<double>(a) > std::get<int>(b)) ? a : b;
    }
    else if (std::holds_alternative<std::string>(a) && std::holds_alternative<double>(b)) {
        std::string str = std::get<std::string>(a);
        double num = std::get<double>(b);
        return (str > std::to_string(num)) ? a : b;
    }
    else if (std::holds_alternative<double>(a) && std::holds_alternative<std::string>(b)) {
        std::string str = std::get<std::string>(b);
        double num = std::get<double>(a);
        return (std::to_string(num) > str) ? a : b;
    }
    else if (std::holds_alternative<std::string>(a) && std::holds_alternative<std::string>(b)) {
        std::string str1 = std::get<std::string>(a);
        std::string str2 = std::get<std::string>(b);
        return (str1 > str2) ? a : b;
    }
    else if (std::holds_alternative<int>(a) && std::holds_alternative<std::string>(b)) {
        int num = std::get<int>(a);
        std::string str = std::get<std::string>(b);
        return (std::to_string(num) > str) ? a : b;
    }
    else if (std::holds_alternative<std::string>(a) && std::holds_alternative<int>(b)) {
        int num = std::get<int>(b);
        std::string str = std::get<std::string>(a);
        return (str > std::to_string(num)) ? a : b;
    }
    else if (std::holds_alternative<double>(a) && std::holds_alternative<double>(b)) {
        double num1 = std::get<double>(a);
        double num2 = std::get<double>(b);
        return (num1 > num2) ? a : b;
    }
    else {
        return boost::variant<int, double, std::string>();
    }
}