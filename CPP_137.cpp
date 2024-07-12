#include <iostream>
#include <string>
#include <stdexcept>

bool compare(const std::any &a, const std::any &b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return static_cast<int>(a.convert_to<float>()) > b.convert_to<float>();
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return static_cast<int>(a.convert_to<double>()) > b.convert_to<double>();
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a.convert_to<float>() > static_cast<float>(b);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a.convert_to<double>() > static_cast<double>(b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        try {
            float fa = std::stof(a.convert_to<std::string>().c_str());
            float fb = b.convert_to<float>();
            return fa > fb;
        } catch (...) {
            throw std::runtime_error("Invalid input");
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        try {
            double fa = std::stod(a.convert_to<std::string>().c_str());
            double fb = b.convert_to<double>();
            return fa > fb;
        } catch (...) {
            throw std::runtime_error("Invalid input");
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        try {
            int fa = std::stoi(a.convert_to<std::string>().c_str());
            int fb = static_cast<int>(b);
            return fa > fb;
        } catch (...) {
            throw std::runtime_error("Invalid input");
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        try {
            float fa = std::stof(a.convert_to<std::string>().c_str());
            float fb = std::stof(b.convert_to<std::string>().c_str());
            return fa > fb;
        } catch (...) {
            throw std::runtime_error("Invalid input");
        }
    }

    return false;
}