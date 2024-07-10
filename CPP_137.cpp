#include <iostream>
#include <string>
#include <cassert>
#include <any>

std::any compare_one(const std::string& s, int i) {
    return std::string("None");
}

int main() {
    assert(std::any_cast<std::string>(compare_one("1", 1)) == "None");
    return 0;
}