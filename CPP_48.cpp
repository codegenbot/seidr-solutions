````
#include <string>
#include <cctype>

bool is_palindrome(std::string text) {
    int start = 0;
    int end = text.length() - 1;

    // Convert to lower case and ignore non-alphanumeric characters
    for (int i = 0; i < text.length(); i++) {
        if (!isalnum(text[i])) continue;
        if (std::tolower(text[i]) != std::tolower(text[text.length() - 1 - i]))
            return false;
    }

    return true;
}
```