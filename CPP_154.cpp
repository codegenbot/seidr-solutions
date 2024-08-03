#include <iostream>
#include <string>

bool cycpattern_check(const std::string& a, const std::string& b) {
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}

int main() {
    std::string a, b;
    std::cin >> a >> b;
    std::cout << cycpattern_check(a, b) << std::endl;
    return 0;
}  