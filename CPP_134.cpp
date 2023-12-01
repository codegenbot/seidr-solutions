bool check_if_last_char_is_a_letter(string txt){
    int length = txt.length();
    if(length == 0){
        return false;
    }
    if(!isalpha(txt[length-1])){
        return false;
    }
    if(length > 1 && isalpha(txt[length-2])){
        return false;
    }
    return true;
}