bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()){
        return false;
    }
    int n = txt.size();
    char lastChar = txt[n-1];
    if(isalpha(lastChar)){
        int i = n-2;
        while(i >= 0 && txt[i] != ' '){
            if(isalpha(txt[i])){
                return false;
            }
            i--;
        }
        return true;
    }
    return false;
}