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

int main() {
    std::string input;
    std::cout << "Enter a text to check if it's a palindrome: ";
    std::cin >> input;
    std::cout << is_palindrome(input) << std::endl;
    return 0;
}