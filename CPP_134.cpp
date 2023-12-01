bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0){
        return false;
    }
    int last_index = txt.length() - 1;
    char last_char = txt[last_index];
    if(isalpha(last_char)){
        if(last_index > 0 && txt[last_index - 1] != ' '){
            return false;
        }
        return true;
    }
    return false;
}