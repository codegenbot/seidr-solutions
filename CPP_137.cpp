#include <iostream>
#include <string>

std::string compareAny(const std::any& a, const std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
            return std::to_string(std::any_cast<int>(a));
        } else if (std::any_cast<int>(a) < std::any_cast<int>(b)) {
            return std::to_string(std::any_cast<int>(b));
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (std::any_cast<float>(a) > std::any_cast<float>(b)) {
            return std::to_string(std::any_cast<float>(a));
        } else if (std::any_cast<float>(a) < std::any_cast<float>(b)) {
            return std::to_string(std::any_cast<float>(b));
        } else {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        float a_float = std::stof(std::any_cast<std::string>(a).replace(std::any_cast<std::string>(a).find(','), 1, "."));
        float b_float = std::stof(std::any_cast<std::string>(b).replace(std::any_cast<std::string>(b).find(','), 1, "."));
        if (a_float > b_float) {
            return std::to_string(a_float);
        } else if (a_float < b_float) {
            return std::to_string(b_float);
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}