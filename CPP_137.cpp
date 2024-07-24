#include <cassert>
#include <any>
#include <string>
#include <iostream>
#include <algorithm>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::any_cast<int>(a) > std::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return std::any_cast<float>(a) > std::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = std::any_cast<std::string>(a);
        std::string str_b = std::any_cast<std::string>(b);
        std::replace(str_a.begin(), str_a.end(), ',', '.');
        std::replace(str_b.begin(), str_b.end(), ',', '.');
        return std::stof(str_a) > std::stof(str_b) ? a : b;
    }
    return std::string("None");
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), 1)).type() == typeid(std::string));
    return 0;
}