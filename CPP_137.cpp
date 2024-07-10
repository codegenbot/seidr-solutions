#include <string>
#include <algorithm>

std::string compare_one(std::any a, std::any b) {
    if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = std::any_cast<std::string>(a);
        std::string str2 = std::any_cast<std::string>(b);
        if (!str1.empty() && !str2.empty()) {
            double num1 = std::stod(str1);
            double num2 = std::stod(str2);
            if (num1 > num2) return str1;
            else if (num1 < num2) return str2;
            else return "";
        } else if (!str1.empty()) return str1;
        else if (!str2.empty()) return str2;
    }
    double num1 = std::any_cast<double>(a);
    double num2 = std::any_cast<double>(b);
    if (num1 > num2) return "First";
    else if (num1 < num2) return "Second";
    else return "";
}