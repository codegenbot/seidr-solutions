#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}

bool run_tests() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    assert(cycpattern_check("abcd", "cdab") == true);
    assert(cycpattern_check("abcde", "deabc") == true);
    assert(cycpattern_check("12345", "54321") == false);
    
    return true;
}

int main() {
    run_tests();
    
    return 0;
}