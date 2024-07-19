#include <iostream>
#include <string>
#include <any>
#include <cassert>

std::any compare_one(const std::string& s1, const std::string& s2) {
    if (s1 == s2) {
        return std::string("Equal");
    } else {
        return std::string("Not equal");
    }
}

int main() {
    assert(std::any_cast<std::string>(compare_one("1", "1")) == "Equal");
}