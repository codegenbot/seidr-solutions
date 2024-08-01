#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        if (std::stod(b.convert_to<std::string>().c_str()) > std::stod(a.convert_to<std::string>().c_str())) {
            return b;
        } else {
            return a;
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        if (std::stod(b.convert_to<std::string>().c_str()) > std::stod(a.convert_to<std::string>().c_str())) {
            return b;
        } else {
            return a;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        int aInt = std::stoi(a.convert_to<std::string>().erase(0, 1).erase(a.convert_to<std::string>().find(',') + 1));
        int bInt = std::stoi(b.convert_to<std::string>().erase(0, 1).erase(b.convert_to<std::string>().find(',') + 1));
        if (aInt < bInt) {
            return a;
        } else if (aInt > bInt) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(double) && a.convert_to<double>() > b.convert_to<double>()) {
        return a;
    } else if (b.type() == typeid(double) && b.convert_to<double>() > a.convert_to<double>()) {
        return b;
    } else {
        return "None";
    }
}