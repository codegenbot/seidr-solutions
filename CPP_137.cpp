#include <iostream>
#include <string>
#include <typeindex>
#include <algorithm>

std::any max_value(const std::any& a, const std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int int_a = std::any_cast<int>(a);
        int int_b = std::any_cast<int>(b);
        return (int_a > int_b) ? a : (int_a < int_b) ? b : "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float float_a = std::any_cast<float>(a);
        float float_b = std::any_cast<float>(b);
        return (float_a > float_b) ? a : (float_a < float_b) ? b : "None";
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = std::any_cast<std::string>(a);
        std::string str_b = std::any_cast<std::string>(b);
        std::replace(str_a.begin(), str_a.end(), ',', '.');
        std::replace(str_b.begin(), str_b.end(), ',', '.');
        float a_float = std::stof(str_a);
        float b_float = std::stof(str_b);
        return (a_float > b_float) ? a : (a_float < b_float) ? b : "None";
    } else {
        return "None";
    }
}

int main() {
    std::any a = 10;
    std::any b = 20;
    std::any result = max_value(a, b);
    
    if (result.type() == typeid(int) || result.type() == typeid(float)) {
        std::cout << std::any_cast<number>(result) << std::endl;
    } else {
        std::cout << std::any_cast<std::string>(result) << std::endl;
    }

    return 0;
}