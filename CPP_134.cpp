Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int last_index = txt.size() - 1;
    char last_char = txt[last_index];
    bool is_space = false;
    for (int i = 0; i < last_index; ++i) {
        if (!isspace(txt[i])) {
            is_space = true;
            break;
        }
    }
    return isalpha(last_char) && !is_space;
}