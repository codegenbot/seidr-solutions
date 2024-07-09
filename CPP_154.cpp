#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    if(a.length() != b.length()) return false;
    std::string temp = b + b;
    return (temp.find(a) != std::string::npos);
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    assert(cycpattern_check("hello", "world") == false);
    assert(cycpattern_check("abc", "cab") == true);
    assert(cycpattern_check("1234", "3412") == true);
    
    return 0;
}