#include <iostream>
#include <string>

bool cycpattern_check(std::string a, std::string b) {
    int len = b.length();
    std::string rotated = b + b;
    for (int i = 0; i < len; ++i) {
        if (a.find(rotated.substr(i, len)) != std::string::npos) {
            return true;
        }
    }
    return false;
}

int main() {
    std::cout << std::boolalpha; // prints bools as true/false
    std::cout << (cycpattern_check("winemtt", "tinem") == true) << std::endl;
    return 0;
}