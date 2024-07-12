#include <iostream>
#include <any>
#include <string>
#include <cassert>

std::any compare_one(const std::any& a, const std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::any(std::any_cast<int>(a) == std::any_cast<int>(b)); // Comparison logic for integers
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return std::any(std::any_cast<float>(a) == std::any_cast<float>(b)); // Comparison logic for floats
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return std::any(std::any_cast<std::string>(a) == std::any_cast<std::string>(b)); // Comparison logic for strings
    } else if ((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        return std::any(std::any_cast<int>(a) == std::stoi(std::any_cast<std::string>(b))); // Convert and compare int and string
    }
    return std::any("None");
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "true"); // Ensure correct return type
    return 0;
}