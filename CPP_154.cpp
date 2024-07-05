#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    int len = b.length();
    std::string temp = b + b;
    for (int i = 0; i < len; ++i) {
        if (a.find(temp.substr(i, len)) != std::string::npos) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    return 0;
}