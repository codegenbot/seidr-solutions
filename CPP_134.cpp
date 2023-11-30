bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()){
        return false;
    }
    int length = txt.length();
    char lastChar = txt[length-1];
    if(isalpha(lastChar)){
        if(length >= 2 && txt[length-2] != ' '){
            return false;
        }
        return true;
    }
    return false;
}