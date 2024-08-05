#include <iostream>
#include <string>
#include <any>
#include <cassert>

std::any compare_one(const std::any& a, int b) {
    return (b == 1) ? a : std::string("None");
}

int main() {
    std::any result = compare_one(std::string("1"), 1);

    assert(std::any_cast<std::string>(result) == "1");

    return 0;
}