bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()){
        return false;
    }
    int len = txt.length();
    char last_char = txt[len-1];
    if(isalpha(last_char)){
        if(txt[len-2] == ' ' || len == 1){
            return true;
        }
    }
    return false;
}