#include <iostream>
#include <any>
#include <string>
#include <cassert>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::any(std::any_cast<int>(a) == std::any_cast<int>(b));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return std::any(std::any_cast<float>(a) == std::any_cast<float>(b));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return std::any(std::any_cast<std::string>(a) == std::any_cast<std::string>(b));
    } else if ((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        return std::any(std::any_cast<int>(a) == std::stoi(std::any_cast<std::string>(b)));
    }
    return std::any("None");
}

int main() {
    assert(std::any_cast<bool>(compare_one(1, 1)).has_value());
    return 0;
}