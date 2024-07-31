#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}

// Additional test cases
int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    assert(cycpattern_check("abcdbcd", "cdb") == true);
    assert(cycpattern_check("hellohello", "lohel") == true);
    assert(cycpattern_check("programming", "grammipr") == false);

    return 0;
}