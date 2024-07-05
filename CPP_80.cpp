#include <iostream>
#include <string>

bool is_happy(std::string s) {
    if (s.length() < 3) return false;
    for (size_t i = 0; i <= s.length() - 3; ++i) {
        if (s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << std::boolalpha;
    std::cout << is_happy("iopaxioi") << std::endl; // Should print: false
    std::cout << is_happy("abcdef") << std::endl; // Should print: true
    std::cout << is_happy("abca") << std::endl; // Should print: false
    return 0;
}