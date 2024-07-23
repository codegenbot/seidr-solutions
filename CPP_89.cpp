string encrypt(string s){
    string result = "";
    
    for(char c : s){
        if(isalpha(c)){
            char encrypted = c + 2 * (c >= 'A' && c <= 'Z' ? 1 : -1);
            if(encrypted < 'A' || (encrypted > 'Z' && encrypted < 'a') || encrypted > 'z'){
                encrypted -= 26;
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    
    return result;
}