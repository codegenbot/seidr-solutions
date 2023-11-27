#include <any>
#include <string>
#include <algorithm>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = std::any_cast<int>(a);
        int num2 = std::any_cast<int>(b);
        return std::max(num1, num2);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = std::any_cast<float>(a);
        float num2 = std::any_cast<float>(b);
        return std::max(num1, num2);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = std::any_cast<std::string>(a);
        std::string str2 = std::any_cast<std::string>(b);
        return std::max(str1, str2);
    }
    return std::any();
}