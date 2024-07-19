bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0)
        return false;
    char lastChar = txt.back();
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] != ' ' && txt[i] == lastChar){
            return false;
        }
    }
    if(isalpha(lastChar))
        return true;
    else
        return false;
}