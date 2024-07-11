string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char encrypted_char = s[i] + 2 * ('z' - s[i] >= 2 ? 2 : -24);
            if(encrypted_char > 'z'){
                encrypted_char = 'a' + (encrypted_char - 'z' - 1);
            }
            result += encrypted_char;
        }
        else{
            result += s[i];
        }
    }
    return result;
}