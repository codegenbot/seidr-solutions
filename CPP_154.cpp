#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    if(a.length() != b.length()) return false;
    std::string concat = a + a;
    return concat.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    
    // Add more test cases here
    
    return 0;
}