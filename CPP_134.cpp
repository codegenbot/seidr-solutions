Here is the solution:

```cpp
bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    char lastChar = txt.back();
    bool lastIsAlpha = isalpha(lastChar);
    bool isWordLast = txt.find(" ") == string::npos || txt.find(" ", txt.find(" ") + 1) > txt.find(lastChar);
    return lastIsAlpha && !isWordLast;
}