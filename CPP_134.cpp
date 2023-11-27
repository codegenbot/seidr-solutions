bool check_if_last_char_is_a_letter(string txt){
    int n = txt.length();
    if(n == 0) return false;
    if(!isalpha(txt[n - 1])) return false;
    int i = n - 2;
    while(i >= 0 && txt[i] != ' '){
        if(isalpha(txt[i])){
            return false;
        }
        i--;
    }
    return true;
}