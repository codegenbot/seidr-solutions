#include <iostream>
#include <string>

bool is_palindrome(std::string text) {
    int n = text.length();
    for (int i = 0; i < n/2; i++) {
        if (text[i] != text[n-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::cin >> text;
    
    if (is_palindrome(text)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
    
    return 0;
}