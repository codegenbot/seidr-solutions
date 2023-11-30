bool check_if_last_char_is_a_letter(string txt){
    int n = txt.length();
    if(n == 0){
        return false;
    }
    if(isalpha(txt[n-1]) && txt[n-1] != ' '){
        return true;
    }
    return false;
}