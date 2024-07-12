#include <iostream>
#include <string>
#include <limits>

bool compare(const std::any& a, const std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return static_cast<int>(a.convert<int>().get()) > b.convert<float>().get();
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return static_cast<int>(a.convert<int>().get()) > b.convert<double>().get();
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a.convert<float>().get() > static_cast<float>(b.convert<int>().get());
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a.convert<double>().get() > static_cast<double>(b.convert<int>().get());
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        try {
            float fa = std::stof(a.convert<std::string>().get().c_str());
            float fb = b.convert<float>().get();
            return fa > fb;
        } catch (...) {
            return false;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        try {
            double fa = std::stod(a.convert<std::string>().get().c_str());
            double fb = b.convert<double>().get();
            return fa > fb;
        } catch (...) {
            return false;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        try {
            int fa = std::stoi(a.convert<std::string>().get().c_str());
            int fb = b.convert<int>().get();
            return fa > fb;
        } catch (...) {
            return false;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        try {
            float fa = std::stof(a.convert<std::string>().get().c_str());
            float fb = std::stof(b.convert<std::string>().get().c_str());
            return fa > fb;
        } catch (...) {
            return false;
        }
    } else {
        return false;
    }
}

int main() {
    while (true) {
        int num1, num2;
        std::cout << "Enter two numbers or 'q' to quit: ";
        std::cin >> num1 >> num2;

        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter numeric values.\n";
            break;
        }

        if (num1 == 0 && num2 == 0) {
            break;
        }

        if (compare(std::any(num1), std::any(num2))) {
            std::cout << "The first number is greater.\n";
        } else {
            std::cout << "The second number is greater or equal.\n";
        }
    }

    return 0;
}