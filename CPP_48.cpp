#include <string>
#include <cctype>

bool is_palindrome(std::string text) {
    int start = 0;
    int end = text.length() - 1;

    while (start < end) {
        if (!isalnum(text[start])) { 
            start++;
            continue;
        }
        if (!isalnum(text[end])) { 
            end--;
            continue;
        }
        if (tolower(text[start]) != tolower(text[end])) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}