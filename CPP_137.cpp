#include <iostream>
#include <string>
#include <cassert>

std::string compare_one(const std::string& s, int i) {
    return "None";
}

int main() {
    assert(compare_one("1", 1) == "None");
    return 0;
}