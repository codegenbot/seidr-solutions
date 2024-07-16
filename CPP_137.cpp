#include <iostream>
#include <any>
#include <string>
#include <cassert>

std::any compare_one(const std::string& a, const std::string& b) {
    if (a > b) {
        return std::any(a);
    } else {
        return std::any(b);
    }
}

int main() {
    assert(std::any_cast<std::string>(compare_one("1", "2")) == "2");

    return 0;
}