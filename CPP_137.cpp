#include <string>
#include <iostream>
#include <any>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(double)) {
        if (b.type() == typeid(double)) {
            double da = std::any_cast<double>(a);
            double db = std::any_cast<double>(b);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else if (b.type() == typeid(std::string)) {
            std::string sb = std::any_cast<std::string>(b);
            double da = std::stod(std::any_cast<std::string>(a));
            double db = std::stod(sb);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else {
            throw std::runtime_error("Invalid type");
        }
    } else if (a.type() == typeid(std::string)) {
        if (b.type() == typeid(double)) {
            double da = std::stod(std::any_cast<std::string>(a));
            double db = std::any_cast<double>(b);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else if (b.type() == typeid(std::string)) {
            std::string sa = std::any_cast<std::string>(a);
            std::string sb = std::any_cast<std::string>(b);
            double da = std::stod(sa);
            double db = std::stod(sb);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else {
            throw std::runtime_error("Invalid type");
        }
    } else {
        throw std::runtime_error("Invalid type");
    }
}