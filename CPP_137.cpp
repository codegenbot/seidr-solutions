#include <iostream>
#include <variant>
#include <string>
#include <cassert>

std::variant<const char*, std::string> compare_one(std::string a, std::string b) {
    return "None";
}

int main() {
    assert(std::get<std::string>(compare_one("1", "1")) == "None");
    return 0;
}