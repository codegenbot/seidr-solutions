#include <string>
#include <iostream>
#include <cassert>

std::string compare_one(const std::string& s1, const std::string& s2) {
    if (s1 == s2) {
        return "Equal";
    } else {
        return "Not equal";
    }
}

int main() {
    assert(compare_one(std::string("1"), std::string("1")) == "Equal");
}