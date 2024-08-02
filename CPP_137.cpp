#include <iostream>
#include <string>
#include <tuple>
#include <cassert>

std::string compare_one(std::string s1, std::string s2) {
    if (s1 == s2) {
        return "None";
    } else {
        if (s1 < s2) {
            return s1;
        } else {
            return s2;
        }
    }
}

int main() {
    assert(compare_one("1", "1") == "None");
}