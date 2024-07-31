string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char encrypted_char = (tolower(s[i]) - 'a' + 2 * 2) % 26 + 'a';
            if(isupper(s[i])){
                encrypted_char = toupper(encrypted_char);
            }
            result += encrypted_char;
        } else {
            result += s[i];
        }
    }
    return result;
}