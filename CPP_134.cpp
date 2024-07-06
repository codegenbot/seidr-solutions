Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string lastChar = txt.substr(txt.length() - 1);
    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            if (i == txt.length() - 1 || !isalpha(txt[i + 1])) return false;
        }
    }
    return isalpha(stoi(lastChar));
}