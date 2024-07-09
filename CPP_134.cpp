bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    int len = txt.length();
    char lastChar = txt[len-1];
    if(isalpha(lastChar) && !isalnum(lastChar)) return true;
    return false;
}