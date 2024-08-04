#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    int len1 = a.length();
    int len2 = b.length();
    if (len1 != len2) return false;

    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    
    return 0;
}