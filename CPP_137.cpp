#include <iostream>
#include <string>
#include <algorithm>
#include <any>

using namespace std;

float convert_to_float(std::any var) {
    if (var.type() == typeid(int)) {
        return std::any_cast<int>(var);
    } else if (var.type() == typeid(float)) {
        return std::any_cast<float>(var);
    } else if (var.type() == typeid(string)) {
        string str = std::any_cast<string>(var);
        replace(str.begin(), str.end(), ',', '.');
        return std::stof(str);
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
            float float_a = convert_to_float(a);
            float float_b = convert_to_float(b);
            if (float_a == float_b) return "None";
            return float_a > float_b ? a : b;
        }
    } else {
        float float_a = convert_to_float(a);
        float float_b = convert_to_float(b);
        if (float_a == float_b) return "None";
        return float_a > float_b ? a : b;
    }
    return "None";
}