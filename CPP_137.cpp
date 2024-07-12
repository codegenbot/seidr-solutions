#include <iostream>
#include <any>
#include <string>
#include <cassert> 

std::any compare_one(std::any a, std::any b) {
    // Add your comparison logic here
    return std::any("None");
}

int main() {
    assert(std::any_cast<const char*>(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))).c_str()) == typeid(const char*)); // Corrected assert statement
    return 0;
}