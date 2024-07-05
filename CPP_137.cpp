#include <iostream>
#include <string>
#include <algorithm>
#include <any>
using namespace std;

double to_double(std::any val) {
    if (val.type() == typeid(int)) {
        return std::any_cast<int>(val);
    } else if (val.type() == typeid(float)) {
        return std::any_cast<float>(val);
    } else if (val.type() == typeid(string)) {
        string str_val = std::any_cast<string>(val);
        replace(str_val.begin(), str_val.end(), ',', '.');
        return stod(str_val);
    }
    return 0.0;
}

std::any compare_one(std::any a, std::any b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int)) {
            int int_a = std::any_cast<int>(a);
            int int_b = std::any_cast<int>(b);
            if (int_a == int_b) return "None";
            return int_a > int_b ? a : b;
        } else if (a.type() == typeid(float)) {
            float float_a = std::any_cast<float>(a);
            float float_b = std::any_cast<float>(b);
            if (float_a == float_b) return "None";
            return float_a > float_b ? a : b;
        } else if (a.type() == typeid(string)) {
            string str_a = std::any_cast<string>(a);
            string str_b = std::any_cast<string>(b);
            if (str_a == str_b) return "None";
            return str_a > str_b ? a : b;
        }
    }
    
    double double_a = to_double(a);
    double double_b = to_double(b);
    if (double_a == double_b) return "None";
    return double_a > double_b ? a : b;
}

int main() {
    std::any a = 42;
    std::any b = 3.14f;
    std::any result = compare_one(a, b);
    if (result.type() == typeid(int)) {
        std::cout << std::any_cast<int>(result) << std::endl;
    } else if (result.type() == typeid(float)) {
        std::cout << std::any_cast<float>(result) << std::endl;
    } else if (result.type() == typeid(string)) {
        std::cout << std::any_cast<string>(result) << std::endl;
    } else if (result.type() == typeid(const char*)) {
        std::cout << std::any_cast<const char*>(result) << std::endl;
    }
    return 0;
}