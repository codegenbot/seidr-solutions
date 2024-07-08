#include <iostream>
#include <string>

bool is_palindrome(const std::string& text) {
    int left = 0;
    int right = text.length() - 1;
    while (left < right) {
        if (text[left] != text[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a text: ";
    std::cin >> input;
    
    if (is_palindrome(input)) {
        std::cout << "The text is a palindrome.";
    } else {
        std::cout << "The text is not a palindrome.";
    }

    return 0;
}