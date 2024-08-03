Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    string last_char = txt.substr(txt.length() - 1);
    for(int i=0; i<txt.length(); i++) {
        if(txt[i] == ' ' && i != (txt.length()-1)) {
            string word = txt.substr(i+1, txt.length()-i-1);
            if(last_char == word) return false;
        }
    }
    return isalpha(txt[txt.length()-1]);
}