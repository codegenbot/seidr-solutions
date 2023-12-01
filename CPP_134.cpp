bool check_if_last_char_is_a_letter(string txt){
    int n = txt.length();
    
    if(n == 0){
        return false;
    }
    
    char last_char = txt[n-1];
    
    if(isalpha(last_char)){
        for(int i=n-2; i >= 0; i--){
            if(txt[i] == ' '){
                return true;
            }
        }
    }
    
    return false;
}