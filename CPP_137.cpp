#include <iostream>
#include <string>
#include <stdexcept>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)std::any_cast<int>(a) > (float)std::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)std::any_cast<int>(a) > (double)std::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)std::any_cast<float>(a) > (int)std::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)std::any_cast<double>(a) > (int)std::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        try {
            float fa = std::stof(std::any_cast<std::string>(a).c_str());
            float fb = (float)std::any_cast<float>(b);
            return fa > fb ? a : b;
        } catch (...) {
            throw std::invalid_argument("Invalid conversion");
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        try {
            double fa = std::stod(std::any_cast<std::string>(a).c_str());
            double fb = (double)std::any_cast<double>(b);
            return fa > fb ? a : b;
        } catch (...) {
            throw std::invalid_argument("Invalid conversion");
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        try {
            int fa = std::stoi(std::any_cast<std::string>(a).c_str());
            int fb = (int)std::any_cast<int>(b);
            return fa > fb ? a : b;
        } catch (...) {
            throw std::invalid_argument("Invalid conversion");
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        try {
            float fa = std::stof(std::any_cast<std::string>(a).c_str());
            float fb = std::stof(std::any_cast<std::string>(b).c_str());
            return fa > fb ? a : b;
        } catch (...) {
            throw std::invalid_argument("Invalid conversion");
        }
    }
    return "None";
}