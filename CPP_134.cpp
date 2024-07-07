Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    char lastChar = txt.back();
    bool isLetter = isalpha(lastChar);
    bool isPartOfWord = txt.find(" ") == string::npos || txt.rfind(" ") >= txt.size() - 1;
    return isLetter && !isPartOfWord;
}