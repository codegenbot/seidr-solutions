#include <string>
#include <iostream>

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
            float fa = std::stof(a.convert<std::string>().c_str());
            float fb = (float)b.convert_to<float>();
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        try {
            double fa = std::stod(a.convert<std::string>().c_str());
            double fb = (double)b.convert_to<double>();
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        try {
            int fa = std::stoi(a.convert<std::string>().c_str());
            int fb = (int)b.convert_to<int>();
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        try {
            float fa = std::stof(a.convert<std::string>().c_str());
            float fb = std::stof(b.convert<std::string>().c_str());
            return fa > fb ? a : b;
        } catch (...) {
            return "None";
        }
    }
    return "None";
}

int main() {
    std::any a("10");
    std::any b(3.5);
    std::any result = compare_one(a, b);
    if (result.type() == typeid(std::string)) {
        std::cout << result.convert<std::string>().c_str();
    } else {
        std::cout << "Result: " << result.convert_to<int>();
    }
    return 0;
}