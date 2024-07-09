#include <boost/variant.hpp>
#include <iostream>
#include <string>
#include <stdexcept>

boost::variant<int, float, double, std::string> compare_one(boost::variant<int, float, double, std::string> a, boost::variant<int, float, double, std::string> b) {
    if (std::holds_alternative<int>(a) && std::holds_alternative<float>(b)) {
        return (std::get<int>(a) > std::get<float>(b)) ? a : b;
    } else if (std::holds_alternative<int>(a) && std::holds_alternative<double>(b)) {
        return (std::get<int>(a) > std::get<double>(b)) ? a : b;
    } else if (std::holds_alternative<std::string>(a) && std::holds_alternative<int>(b)) {
        std::string str = std::get<std::string>(a);
        int num = std::get<int>(b);
        return (std::stoi(str) > num) ? a : b;
    } else if (std::holds_alternative<float>(a) && std::holds_alternative<int>(b)) {
        return (std::get<float>(a) > static_cast<float>(std::get<int>(b))) ? a : b;
    } else if (std::holds_alternative<double>(a) && std::holds_alternative<int>(b)) {
        return (std::get<double>(a) > static_cast<double>(std::get<int>(b))) ? a : b;
    } else if (std::holds_alternative<std::string>(a) && std::holds_alternative<float>(b)) {
        std::string str = std::get<std::string>(a);
        float num = std::get<float>(b);
        return (std::stof(str) > num) ? a : b;
    } else if (std::holds_alternative<std::string>(a) && std::holds_alternative<double>(b)) {
        std::string str = std::get<std::string>(a);
        double num = std::get<double>(b);
        return (std::stod(str) > num) ? a : b;
    } else {
        return boost::variant<int, float, double, std::string>(0); 
    }
}