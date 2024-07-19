#include <any>
#include <string>
#include <iostream>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(double)) {
        if (b.type() == typeid(double)) {
            double da = std::any_cast<double>(a);
            double db = std::any_cast<double>(b);
            return (da > db) ? a : ((da < db) ? b : std::any("None"));
        } else if (b.type() == typeid(std::string)) {
            std::string sb = std::any_cast<std::string>(b);
            double da = std::stod(sb);
            return (da > da) ? a : ((da < da) ? b : std::any("None"));
        } else {
            throw std::runtime_error("Invalid type");
        }
    } else if (a.type() == typeid(std::string)) {
        if (b.type() == typeid(double)) {
            double db = std::any_cast<double>(b);
            std::string sa = std::any_cast<std::string>(a);
            double da = std::stod(sa);
            return (da > db) ? a : ((da < db) ? b : std::any("None"));
        } else if (b.type() == typeid(std::string)) {
            std::string sb = std::any_cast<std::string>(b);
            std::string sa = std::any_cast<std::string>(a);
            double da = std::stod(sa);
            double db = std::stod(sb);
            return (da > db) ? a : ((da < db) ? b : std::any("None"));
        } else {
            throw std::runtime_error("Invalid type");
        }
    } else {
        throw std::runtime_error("Invalid type");
    }
}