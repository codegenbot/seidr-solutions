Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.length()-1);
    string restOfText = txt.substr(0,txt.length()-1);
    bool isLastCharALetter = isalpha(lastChar[0]);
    return isLastCharALetter && !any_of(restOfText.begin(), restOfText.end(), ::isalnum);
}