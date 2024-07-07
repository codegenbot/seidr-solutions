bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    int last_char_idx = txt.length() - 1;
    char last_char = txt[last_char_idx];
    if(!isalpha(last_char)) return false;
    for(int i = 0; i < last_char_idx; i++){
        if(!isspace(txt[i])){
            return true;
        }
    }
    return false;
}