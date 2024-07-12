bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0)
        return false;
    char lastChar = txt.back();
    bool isWordEnd = true;
    for(int i=0; i<txt.length()-1; i++){
        if(txt[i] != ' ' && txt[i+1] == ' ')
            isWordEnd = false;
    }
    return (isalpha(lastChar) && !isWordEnd);
}