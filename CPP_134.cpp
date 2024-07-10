Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    char lastChar = txt.back();
    for (int i = 0; i < txt.size() - 1; i++) {
        if (txt[i] == ' ') break;
    }
    if (isalpha(lastChar)) return true;
    return false;
}