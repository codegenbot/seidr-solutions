bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    for(int i = 0; i < txt.length() - 1; i++){
        if(txt[i] == ' ')
            return !isalpha(txt.back());
    }
    return isalpha(txt.back());
}