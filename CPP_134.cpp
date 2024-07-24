Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt){
    int length = txt.length();
    if(length == 0) return false;
    char lastChar = txt[length - 1];
    bool isLetter = isalpha(lastChar);
    bool isPartOfWord = false;
    for(int i = 0; i < length; i++){
        if(txt[i] == ' ' && !isPartOfWord){
            isPartOfWord = true;
        }else if(!isPartOfWord && txt[i] != ' '){
            isPartOfWord = true;
        }
    }
    return isLetter && !isPartOfWord;
}