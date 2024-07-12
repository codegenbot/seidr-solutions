#include <iostream>
#include <variant>
#include <string>
#include <cassert>

std::variant<const char*, std::string> compare_one(std::string a, std::string b) {
    // Add your comparison logic here
    if (a == b) {
        return "Equal";
    } else {
        return "Not Equal";
    }
}

int main() {
    assert(std::get<std::string>(compare_one("1", "1")) == "Equal");
    return 0;
}