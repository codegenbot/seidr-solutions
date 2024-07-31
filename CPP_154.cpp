#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    assert(cycpattern_check("hello", "lohel") == true);
    assert(cycpattern_check("abcde", "deabc") == true);
    assert(cycpattern_check("12345", "45231") == true);
    assert(cycpattern_check("apple", "orange") == false);
    return 0;
}  