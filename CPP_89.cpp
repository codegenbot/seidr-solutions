string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted_char = c + 2 * (c >= 'a' && c <= 'z' ? 1 : -1);
            if((c >= 'A' && c <= 'Z' && encrypted_char > 'Z') || (c >= 'a' && c <= 'z' && encrypted_char > 'z')){
                encrypted_char -= 26;
            }
            encrypted += encrypted_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}