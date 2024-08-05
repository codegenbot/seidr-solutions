#include <any>
#include <iostream>
#include <string>
#include <cassert>

std::any compare_one(const std::any& a, int b) {
    return (b == 1) ? a : std::any("None");
}

int main() {
    assert(std::any_cast<std::string>(std::any_cast<std::string>(compare_one(std::string("1"), 1))) == "None");

    return 0;
}