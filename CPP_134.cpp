Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.length()-1, 1);
    int lastIndex = txt.rfind(' ');
    if(lastIndex == -1 || lastIndex == txt.length() - 2)
        return isalpha(lastChar[0]);
    return false;
}