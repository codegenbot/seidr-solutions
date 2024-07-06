```cpp
bool is_palindrome(std::string text) {
    int start = 0;
    int end = text.length() - 1;

    while (start < end) {
        while (!isalnum(text[start])) { 
            start++;
        }
        while (!isalnum(text[end])) { 
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