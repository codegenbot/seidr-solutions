#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    assert(cycpattern_check("abcde", "cdeab") == true);
    assert(cycpattern_check("hello", "world") == false);
    assert(cycpattern_check("ab", "ba") == true);
    assert(cycpattern_check("12345", "12345") == true);

    return 0;
}