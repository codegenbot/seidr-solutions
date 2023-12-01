#include <string>
#include <algorithm>

auto compare_one(auto a, auto b) {
    if (typeid(a) == typeid(int) && typeid(b) == typeid(int)) {
        int num1 = a;
        int num2 = b;
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return num2;
        }
    } else if (typeid(a) == typeid(float) && typeid(b) == typeid(float)) {
        float num1 = a;
        float num2 = b;
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return num2;
        }
    } else if (typeid(a) == typeid(std::string) && typeid(b) == typeid(std::string)) {
        std::string str1 = a;
        std::string str2 = b;
        std::replace(str1.begin(), str1.end(), ',', '.');
        std::replace(str2.begin(), str2.end(), ',', '.');
        float num1 = std::stof(str1);
        float num2 = std::stof(str2);
        if (num1 > num2) {
            return str1;
        } else if (num2 > num1) {
            return str2;
        }
    }
    return decltype(a)();
}