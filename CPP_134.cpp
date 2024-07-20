Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // Check if string is empty.
    char lastChar = txt.back(); // Get the last character of the string.
    return !isalnum(lastChar); // Check if last character is not alphanumeric.
}