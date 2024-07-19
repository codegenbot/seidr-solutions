#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    int n = a.size();
    int m = b.size();
    if (n != m) return false;
    
    std::string aa = a + a;
    return aa.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    
    return 0;
}