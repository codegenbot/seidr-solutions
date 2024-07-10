Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    int len = txt.length();
    if (len == 0) return false;
    char lastChar = txt[len-1];
    if (!isalpha(lastChar)) return false;
    for(int i=len-2; i>=0; i--) {
        if (!isspace(txt[i])) {
            return true;
        }
    }
    return false;
}