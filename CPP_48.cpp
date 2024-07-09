#include <string>

bool is_palindrome(std::string text) {
    int start = 0;
    int end = text.length() - 1;

    while (start < end) {
        if (std::tolower(text[start]) != std::tolower(text[end])) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}