Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int len = txt.length();
    char lastChar = txt[len-1];
    bool isLetter = isalpha(lastChar);
    bool isWordLast = (len > 0 && !isspace(txt.back()));
    return isLetter && !isWordLast;
}