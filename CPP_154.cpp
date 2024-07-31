#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    assert(cycpattern_check("abcd", "bcda") == true);
    assert(cycpattern_check("programming", "gramminpro") == false);
    assert(cycpattern_check("", "") == true);
    assert(cycpattern_check("123", "231") == true);
    assert(cycpattern_check("abcdef", "fedcba") == true);

    return 0;
}