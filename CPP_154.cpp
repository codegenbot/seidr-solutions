#include <iostream>
#include <string>

bool cycpattern_check(const std::string& a, const std::string& b) {
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}

int main() {
    std::cout << std::boolalpha << cycpattern_check("winemtt", "tinem") << std::endl;
}