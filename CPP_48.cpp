```cpp
#include <algorithm>
#include <string>
#include <cctype>

bool is_palindrome(std::string text) {
    int start = 0;
    int end = text.length() - 1;

    while (start <= end) {
        while (start <= end && !isalnum(text[start])) { 
            start++;
        }
        while (start <= end && !isalnum(text[end])) { 
            end--;
        }
        if (tolower(text[start]) != tolower(text[end])) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}