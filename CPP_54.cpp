#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

bool same_chars(const char* s0, const char* s1) {
    std::string temp0(s0);
    std::string temp1(s1);
    
    std::sort(temp0.begin(), temp0.end());
    std::sort(temp1.begin(), temp1.end());
    
    return temp0 == temp1;
}

int main() {
    assert(same_chars("aabb", "aaccc") == false);
    
    return 0;
}