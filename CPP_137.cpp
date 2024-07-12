#include <iostream>
#include <string>
#include <stdexcept>

std::any compare(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::any_cast<int>(a) > std::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return std::any_cast<float>(a) > std::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return std::any_cast<double>(a) > std::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return std::any_cast<float>(b) < std::any_cast<int>(a) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        return std::any_cast<double>(a) > std::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return std::any_cast<double>(b) < std::any_cast<int>(a) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return std::any_cast<float>(a) > std::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        try {
            float fa = stof(std::any_cast<string>(a).c_str());
            float fb = std::any_cast<float>(b);
            return fa > fb ? a : b;
        } catch (...) {
            throw "Invalid input";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        try {
            double fa = stod(std::any_cast<string>(a).c_str());
            double fb = std::any_cast<double>(b);
            return fa > fb ? a : b;
        } catch (...) {
            throw "Invalid input";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        try {
            int fa = stoi(std::any_cast<string>(a).c_str());
            int fb = std::any_cast<int>(b);
            return fa > fb ? a : b;
        } catch (...) {
            throw "Invalid input";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        try {
            float fa = stof(std::any_cast<string>(a).c_str());
            float fb = stof(std::any_cast<string>(b).c_str());
            return fa > fb ? a : b;
        } catch (...) {
            throw "Invalid input";
        }
    } else {
        throw "Invalid input";
    }
}