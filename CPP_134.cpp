Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    char lastChar = txt.back();
    bool isLetter = isalpha(lastChar);
    bool isPartOfWord = false;
    for (int i = 0; i < txt.length(); ++i) {
        if (txt[i] == ' ') {
            isPartOfWord = true;
            break;
        }
    }
    return isLetter && !isPartOfWord;
}