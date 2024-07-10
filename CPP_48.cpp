#include <string>
#include <algorithm>
#include <cctype>

bool is_palindrome(const std::string& text) {
    std::string formatted_text;
    std::copy_if(text.begin(), text.end(), std::back_inserter(formatted_text), [](char c) {
        return std::isalnum(c) && !std::isspace(c);
    });
    
    if (formatted_text.empty()) {
        return true;
    }

    int left = 0;
    int right = formatted_text.length() - 1;
    while (left <= right) {
        if (std::tolower(formatted_text[left]) != std::tolower(formatted_text[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}