#include <any>
#include <iostream>
#include <string>
#include <cassert>

std::any compare_one(const std::any& a, int b) {
    return (b == 1) ? a : "None";
}

int main() {
    std::any result = compare_one(std::string("1"), 1);

    assert(std::any_cast<std::string>(result) == "1");

    return 0;
}