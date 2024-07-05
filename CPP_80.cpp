#include <iostream>
#include <string>

bool is_happy(const std::string& s) {
    if (s.length() < 3) return false;
    for (size_t i = 0; i < s.length() - 2; ++i) {
        if (s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << std::boolalpha;
    std::string input;
    std::cin >> input;
    std::cout << is_happy(input) << std::endl;
    return 0;
}