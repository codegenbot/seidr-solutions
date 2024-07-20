#include <iostream>
#include <string>
#include <cassert>

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
    std::cout << "Enter a string to check if it's a palindrome: ";
    std::cin >> input;
    
    if(is_palindrome(input)){
        std::cout << "It is a palindrome." << std::endl;
    } else {
        std::cout << "It is not a palindrome." << std::endl;
    }
    
    return 0;
}