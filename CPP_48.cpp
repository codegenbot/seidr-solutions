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
    std::cout << is_palindrome("xywzx") << std::endl;
    std::cout << is_palindrome("racecar") << std::endl;
    std::cout << is_palindrome("level") << std::endl;
    std::cout << is_palindrome("hello") << std::endl;

    return 0;
}