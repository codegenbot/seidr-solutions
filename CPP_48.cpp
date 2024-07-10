#include <string>

bool is_palindrome(const std::string& text) {
    if (text.empty()) {
        return false; // empty string is not a palindrome
    }
    
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