#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string &a, const std::string &b) {
    if (a.empty() || b.empty()) return false;
    if (a.length() != b.length()) return false;
    
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}