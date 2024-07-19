#include <string>
#include <iostream>
#include <cassert>

std::string compare_one(const std::string& s1, int number) {
    if (std::stoi(s1) == number) {
        return "Equal";
    } else {
        return "Not equal";
    }
}

int main() {
    assert(compare_one("1", 1) == "Equal");
}