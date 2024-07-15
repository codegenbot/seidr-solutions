#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(std::string text) {
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

/*int main() {
    std::string input_text;
    std::cout << "Enter a text to check if it is a palindrome: ";
    std::cin >> input_text;
    
    if (is_palindrome(input_text)) {
        std::cout << "The input text is a palindrome." << std::endl;
    } else {
        std::cout << "The input text is not a palindrome." << std::endl;
    }
    
    return 0;
}*/