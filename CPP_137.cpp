#include <iostream>
#include <string>
#include <any>
#include <cassert>

std::string compare_one(const std::string& a, const std::string& b) {
    return (a == b) ? a : "None";
}

int main() {
    std::string result = compare_one("1", "1");

    assert(result == "1");
    assert(std::any_cast<std::string>(compare_one(std::string("1"), "1")) == "None");

    return 0;
}