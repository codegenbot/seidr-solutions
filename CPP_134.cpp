bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()){
        return false;
    }
    int length = txt.length();
    if(isalpha(txt[length-1])){
        if(length > 1 && txt[length-2] == ' '){
            return true;
        }
    }
    return false;
}