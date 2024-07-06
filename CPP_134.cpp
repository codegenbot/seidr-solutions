Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if(txt.length() == 0)
        return false;
    char last_char = txt.back();
    for(int i = 0; i < txt.length(); i++) {
        if(txt[i] == ' ' && i == txt.length()-1)
            return false;
        if(txt[i] == ' ' && txt[i+1] == last_char) 
            return false;
    }
    return isalpha(last_char);
}