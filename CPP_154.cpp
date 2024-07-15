#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    int n = a.size();
    int m = b.size();
    if(n != m) return false;
    a += a;
    return a.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    assert(cycpattern_check("abcd", "dabc") == true);
    assert(cycpattern_check("hello", "world") == false);

    return 0;
}