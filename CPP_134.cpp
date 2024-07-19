````
bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0)
        return false;

    char lastChar = txt.back();
    bool isLastCharALetter = (lastChar >= 'a' && lastChar <= 'z') || (lastChar >= 'A' && lastChar <= 'Z');
    
    for(int i=0; i<txt.length() - 1; i++){
        if(txt[i] == ' '){
            return isLastCharALetter;
        }
    }

    return false;
}
```