#include <string>
#include <iostream>
#include <cassert>
#include <variant>
#include <string_view>

std::variant<std::string, std::string_view> compare_one(const std::string& s1, int number) {
    if (std::stoi(s1) == number) {
        return {"Equal"sv};
    } else {
        return {"Not equal"sv};
    }
}

int main() {
    assert(std::get<std::string_view>(compare_one("1", 1)) == "Not equal");
}