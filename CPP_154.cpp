#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    int n = a.size();
    int m = b.size();
    if(n != m) return false;
    std::string new_a = a;
    new_a.append(a);
    return new_a.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == false);
    assert(cycpattern_check("abcdef", "defabc") == true);
    assert(cycpattern_check("hellohello", "hello") == true);
    assert(cycpattern_check("software", "soft") == false);
    assert(cycpattern_check("programming", "ingpro") == false);

    return 0;
}