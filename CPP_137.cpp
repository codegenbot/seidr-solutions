#include <boost/variant.hpp>
#include <iostream>
#include <string>
#include <stdexcept>

boost::variant<int, float, double, std::string> compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return ((int)boost::any_cast<int>(a) > boost::any_cast<float>(b)) ? static_cast<boost::variant<int, float, double, std::string>>(a) : static_cast<boost::variant<int, float, double, std::string>>(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return ((int)boost::any_cast<int>(a) > boost::any_cast<double>(b)) ? static_cast<boost::variant<int, float, double, std::string>>(a) : static_cast<boost::variant<int, float, double, std::string>>(b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return (std::stoi(str) > num) ? static_cast<boost::variant<int, float, double, std::string>>(a) : static_cast<boost::variant<int, float, double, std::string>>(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (boost::any_cast<float>(a) > static_cast<float>(boost::any_cast<int>(b))) ? static_cast<boost::variant<int, float, double, std::string>>(a) : static_cast<boost::variant<int, float, double, std::string>>(b);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (boost::any_cast<double>(a) > static_cast<double>(boost::any_cast<int>(b))) ? static_cast<boost::variant<int, float, double, std::string>>(a) : static_cast<boost::variant<int, float, double, std::string>>(b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float num = boost::any_cast<float>(b);
        return (std::stof(str) > num) ? static_cast<boost::variant<int, float, double, std::string>>(a) : static_cast<boost::variant<int, float, double, std::string>>(b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str = boost::any_cast<std::string>(a);
        double num = boost::any_cast<double>(b);
        return (std::stod(str) > num) ? static_cast<boost::variant<int, float, double, std::string>>(a) : static_cast<boost::variant<int, float, double, std::string>>(b);
    } else {
        return 0; 
    }
}