bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()){
        return false;
    }
    int n = txt.size();
    char lastChar = txt[n-1];
    if(isalpha(lastChar)){
        if(n > 1 && !isalpha(txt[n-2])){
            return true;
        }
        else if(n == 1){
            return true;
        }
    }
    return false;
}