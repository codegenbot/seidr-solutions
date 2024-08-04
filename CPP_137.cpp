#include <iostream>
#include <string>
#include <any>
#include <cassert>

std::any compare_one(const std::string& s1, const std::string& s2) {
    return std::make_any<std::string>(s1 + s2);
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))));
    return 0;
}