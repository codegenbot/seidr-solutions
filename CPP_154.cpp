#include <iostream>
#include <string>

bool cycpattern_check(std::string a, std::string b) {
    if (a.length() != b.length()) return false;    
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}