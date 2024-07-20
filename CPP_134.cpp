Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.size()-1);
    for(int i = 0; i < txt.size() - 1; i++) {
        if(txt[i] == ' ') break;
        else if(txt[i] == lastChar[0]) return false;
    }
    return isalpha(toupper(lastChar[0]));
}