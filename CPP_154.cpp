#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    int n = a.length();
    int m = b.length();
    if (n != m)
        return false;
    return a.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    // Add more test cases here
    return 0;
}