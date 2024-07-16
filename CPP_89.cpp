string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted_char = c + 2 * (c >= 'a' ? 1 : -1);
            if((c >= 'a' && encrypted_char > 'z') || (c < 'a' && encrypted_char > 'Z')){
                encrypted_char -= 26;
            }
            result += encrypted_char;
        }
        else{
            result += c;
        }
    }
    return result;
}