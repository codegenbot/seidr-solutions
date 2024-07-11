#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    int n = a.length();
    int m = b.length();
    if (n != m) return false;
    
    std::string temp = b + b;
    
    if (temp.find(a) != std::string::npos) return true;
    
    for (int i = 1; i < m; ++i) {
        temp = temp.substr(1) + temp[0];
        if (temp.find(a) != std::string::npos) return true;
    }
    
    return false;
}

int main() {
    assert(cycpattern_check("winemtt","tinem") == true);
    
    return 0;
}