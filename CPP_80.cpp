#include <iostream>
#include <string>

bool is_happy(const std::string& s) {
    if (s.length() < 3) return false;
    for (size_t i = 0; i <= s.length() - 3; ++i) {
        if (s[i] == s[i+1] || s[i+1] == s[i+2] || s[i] == s[i+2]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string test;
    std::cout << "Enter the string: ";
    std::cin >> test;
    if (is_happy(test)) {
        std::cout << "The string is happy\n";
    } else {
        std::cout << "The string is not happy\n";
    }
    return 0;
}