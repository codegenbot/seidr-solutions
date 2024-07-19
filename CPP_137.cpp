#include <string>
#include <iostream>
#include <cassert>
#include <variant>

std::variant<std::string, bool> compare_one(const std::string& s1, int number) {
    if (std::stoi(s1) == number) {
        return {"Equal", true};
    } else {
        return {"Not equal", false};
    }
}

int main() {
    assert(std::get<std::string>(compare_one("1", 1)) == "Equal");
}