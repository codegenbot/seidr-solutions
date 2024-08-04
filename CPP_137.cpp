#include <iostream>
#include <string>
#include <any>
#include <cassert>

std::any compare_one(const std::string& str1, const std::string& str2) {
    return std::any(std::string("1"));
}

int main() {
    assert(std::any_cast<std::string>(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == std::any_cast<std::string>(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))));
}