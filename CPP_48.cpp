#include <string>

bool is_palindrome(std::string text) {
    int left = 0;
    int right = text.length() - 1;

    while (left < right) {
        if (std::tolower(text[left]) != std::tolower(text[right]))
            return false;
        left++;
        right--;
    }
    
    return true;
}