bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    char lastChar = txt.back();
    bool prevSpace = false;
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' ') prevSpace = true;
        else{
            if(i == txt.length() - 1) return isalpha(lastChar);
            if(prevSpace) return isalpha(lastChar);
        }
    }
    return false;
}