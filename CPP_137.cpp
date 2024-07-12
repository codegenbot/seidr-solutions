#include <iostream>
#include <string>
#include <limits>

bool compare(const std::any& a, const std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a.convert<int>() > (float)b.convert<float>();
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert<int>() > (double)b.convert<double>();
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a.convert<float>() > (int)b.convert<int>();
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a.convert<double>() > (int)b.convert<int>();
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        try {
            float fa = std::stof(a.convert<std::string>().c_str());
            float fb = (float)b.convert<float>();
            return fa > fb;
        } catch (...) {
            return false;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        try {
            double fa = std::stod(a.convert<std::string>().c_str());
            double fb = (double)b.convert<double>();
            return fa > fb;
        } catch (...) {
            return false;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        try {
            int fa = std::stoi(a.convert<std::string>().c_str());
            int fb = (int)b.convert<int>();
            return fa > fb;
        } catch (...) {
            return false;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        try {
            float fa = std::stof(a.convert<std::string>().c_str());
            float fb = std::stof(b.convert<std::string>().c_str());
            return fa > fb;
        } catch (...) {
            return false;
        }
    }
    return false;
}

int main() {
    std::any a, b;
    // Read input from user
    std::cout << "Enter the first value: ";
    a = a.type().name();
    std::cin >> a;

    std::cout << "Enter the second value: ";
    b = b.type().name();
    std::cin >> b;

    if (compare(a, b)) {
        std::cout << "The first value is greater.\n";
    } else if (!compare(b, a)) {
        std::cout << "The values are equal.\n";
    } else {
        std::cout << "The second value is greater.\n";
    }
    
    return 0;
}