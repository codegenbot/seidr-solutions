#include <iostream>
#include <string>

bool is_palindrome(const std::string& text) {
    int n = text.length();
    for (int i = 0; i < n / 2; ++i) {
        if (text[i] != text[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << std::boolalpha; // For better readability of bool output
    std::cout << is_palindrome("racecar") << std::endl; // Should print true
    std::cout << is_palindrome("hello") << std::endl; // Should print false
    return 0;
}