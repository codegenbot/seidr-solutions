#include <any>
#include <string>
#include <algorithm>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = std::any_cast<int>(a);
        int num2 = std::any_cast<int>(b);
        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        } else {
            return std::string("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = std::any_cast<float>(a);
        float num2 = std::any_cast<float>(b);
        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        } else {
            return std::string("None");
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = std::any_cast<std::string>(a);
        std::string str2 = std::any_cast<std::string>(b);
        std::replace(str1.begin(), str1.end(), ',', '.');
        std::replace(str2.begin(), str2.end(), ',', '.');
        float num1 = std::stof(str1);
        float num2 = std::stof(str2);
        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        } else {
            return std::string("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num1 = std::any_cast<int>(a);
        std::string str2 = std::any_cast<std::string>(b);
        std::replace(str2.begin(), str2.end(), ',', '.');
        float num2 = std::stof(str2);
        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        } else {
            return std::string("None");
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str1 = std::any_cast<std::string>(a);
        int num2 = std::any_cast<int>(b);
        std::replace(str1.begin(), str1.end(), ',', '.');
        float num1 = std::stof(str1);
        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        } else {
            return std::string("None");
        }
    } else {
        return std::string("None");
    }
}