#include <string>
#include <iostream>
#include <cassert>

template <typename T>
std::string compare_one(const T& s1, int number) {
    if (s1 == std::to_string(number)) {
        return "Equal";
    } else {
        return "Not equal";
    }
}

int main() {
    assert(compare_one("1", 1) == "Equal");
}