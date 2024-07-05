#include <iostream>
#include <string>

bool cycpattern_check(std::string a, std::string b) {
    int lenB = b.length();
    std::string rotation = b + b;
    for (int i = 0; i < lenB; ++i) {
        if (a.find(rotation.substr(i, lenB)) != std::string::npos) {
            return true;
        }
    }
    return false;
}

int main() {
    std::cout << std::boolalpha; // for displaying 'true'/'false' instead of '1'/'0'
    std::string a, b;
    std::cin >> a >> b;
    std::cout << cycpattern_check(a, b) << std::endl;
    return 0;
}