bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()){
        return false;
    }
    int n = txt.length();
    if(isalpha(txt[n-1])){
        if(txt[n-2] == ' '){
            return true;
        }
    }
    return false;
}