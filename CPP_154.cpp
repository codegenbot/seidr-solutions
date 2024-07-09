#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    if(a.length() != b.length())
        return false;

    std::string combined = a + a;

    if(combined.find(b) != std::string::npos)
        return true;

    return false;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);

    return 0;
}