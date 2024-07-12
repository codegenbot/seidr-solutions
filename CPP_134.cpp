Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if(txt.length() == 0)
        return false;
    char lastChar = txt.back();
    for(int i=0; i<txt.length()-1; i++) {
        if(lastChar == txt[i]) 
            return false;
    }
    if(isalpha(lastChar))
        return true;
    return false;
}