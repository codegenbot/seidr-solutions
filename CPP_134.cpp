bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()){
        return false;
    }
    int len = txt.length();
    if(!isalpha(txt[len-1])){
        return false;
    }
    for(int i=len-2; i>=0; i--){
        if(txt[i] == ' '){
            return true;
        }
    }
    return false;
}