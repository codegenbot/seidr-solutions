#include <string>
#include <algorithm>

std::string compareOne(std::any a, std::any b) {
    if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = a.cast<std::string>();
        std::string str2 = b.cast<std::string>();
        if (!str1.empty() && !str2.empty()) {
            double num1 = std::stod(str1);
            double num2 = std::stod(str2);
            if (num1 > num2) return str1;
            else if (num1 < num2) return str2;
            else return "";
        } else if (!str1.empty()) return str1;
        else if (!str2.empty()) return str2;
    }
    else {
        double num1 = a.cast<double>();
        double num2 = b.cast<double>();
        if (num1 > num2) return std::to_string(num1);
        else if (num1 < num2) return std::to_string(num2);
        else return "";
    }
    return "";
}