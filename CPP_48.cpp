Here's the completed code:

```cpp
bool is_palindrome(string text) {
    int start = 0, end = text.length() - 1;
    while (start < end) {
        if (text[start] != text[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}