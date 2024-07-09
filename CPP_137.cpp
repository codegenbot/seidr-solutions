#include <iostream>
#include <string>
#include <boost/any.hpp>

std::string compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return std::to_string(static_cast<float>(boost::any_cast<int>(a))) > std::to_string(b.convert_to<float>()) ? std::to_string(a.convert_to<int>()) : std::to_string(b.convert_to<float>());
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::to_string(boost::any_cast<int>(b)) > std::to_string(boost::any_cast<int>(a)) ? std::to_string(b.convert_to<int>()) : std::to_string(a.convert_to<int>());
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return std::to_string(b.convert_to<float>()) > std::to_string(boost::any_cast<int>(a)) ? std::to_string(b.convert_to<float>()) : std::to_string(a.convert_to<int>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<std::string>(b) > boost::any_cast<std::string>(a) ? boost::any_cast<std::string>(b) : boost::any_cast<std::string>(a);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return std::to_string(b.convert_to<float>()) > boost::any_cast<std::string>(a) ? std::to_string(b.convert_to<float>()) : boost::any_cast<std::string>(a);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return boost::any_cast<std::string>(b) > std::to_string(a.convert_to<float>()) ? boost::any_cast<std::string>(b) : std::to_string(a.convert_to<float>());
    } else {
        return "None";
    }
}