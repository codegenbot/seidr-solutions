#include <string>
#include <cctype>

bool is_palindrome(std::string text) {
    int start = 0;
    int end = text.length() - 1;

    while (start < end) {
        while (!isalnum(text[start])) { 
            start++;
            if (start > end) return true; // If all non-alphanumeric characters are processed, it's a palindrome
        }
        while (!isalnum(text[end])) { 
            end--;
        }
        if (tolower(text[start]) != tolower(text[end])) {
            return false;
        } else {
            start++;
            end--;
        }
    }

    return true;
}