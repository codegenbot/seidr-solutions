#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    int n = a.size();
    int m = b.size();
    if(n != m) return false;
    std::string str = a;
    str.append(a);
    return str.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinemtt") == true);
    assert(cycpattern_check("abcdef", "defabc") == true);
    assert(cycpattern_check("hellohello", "ohell") == true);
    assert(cycpattern_check("software", "soft") == false);
    assert(cycpattern_check("programming", "ingpro") == false);
    
    assert(cycpattern_check("12345", "34512") == true);
    assert(cycpattern_check("abc", "abcd") == false);
    assert(cycpattern_check("abc123", "123abc") == true);

    return 0;
}