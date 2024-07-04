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
    std::cout << std::boolalpha;
    std::cout << is_palindrome("xywzx") << std::endl;  // Should print false
    std::cout << is_palindrome("racecar") << std::endl;  // Should print true
    return 0;
}