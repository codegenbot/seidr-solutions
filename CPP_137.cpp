#include <string>
#include <iostream>

std::string compare_one(const std::string& s1, int number) {
    if (s1 == std::to_string(number)) {
        return "Equal";
    } else {
        return "Not equal";
    }
}

int main() {
    compare_one(std::string("1"), 1);
    assert(compare_one(std::string("1"), 1) == "Equal");
}