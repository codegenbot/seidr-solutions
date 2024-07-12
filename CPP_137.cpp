#include <iostream>
#include <string>
#include <limits>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        try {
            float fa = std::stof(a.convert<std::string>().get());
            float fb = (float)b.get();
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        try {
            double fa = std::stod(a.convert<std::string>().get());
            double fb = (double)b.get();
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        try {
            int fa = std::stoi(a.convert<std::string>().get());
            int fb = (int)b.get();
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        try {
            float fa = std::stof(a.convert<std::string>().get());
            float fb = std::stof(b.convert<std::string>().get());
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    }
    return "None";
}

int main() {
    std::any a, b;
    // Your code to read input from user
    std::cout << compare_one(a, b) << std::endl;
    return 0;
}