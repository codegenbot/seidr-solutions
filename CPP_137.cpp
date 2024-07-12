#include <iostream>
#include <any>
#include <string>
#include <cassert>

std::any compare_one(const std::any& a, const std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        // Comparison logic for integers
        // Example: return std::any with the comparison result for integers
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        // Comparison logic for floats
        // Example: return std::any with the comparison result for floats
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        // Comparison logic for strings
        // Example: return std::any with the comparison result for strings
    } else if ((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        // Convert and compare int and string
        // Example: return std::any with the comparison result after conversion
    }
    return std::any("None");
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "None"); // Ensure correct return type
    return 0;
}