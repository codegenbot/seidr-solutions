bool check_if_last_char_is_a_letter(string txt){
    int len = txt.length();
    if(len == 0){
        return false;
    }
    char lastChar = txt[len-1];
    if(isalpha(lastChar)){
        if(txt[len-2] == ' ' || len == 1){
            return true;
        }
    }
    return false;
}