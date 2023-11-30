bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()){
        return false;
    }
    
    int n = txt.length();
    char lastChar = txt[n-1];
    
    if(isalpha(lastChar)){
        for(int i=n-2; i>=0; i--){
            if(txt[i] == ' '){
                return true;
            }
        }
    }
    
    return false;
}