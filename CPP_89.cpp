string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted_char = c + 2 * ('z' - tolower(c));
            if(islower(c) && encrypted_char > 'z'){
                encrypted_char -= 26;
            } else if(isupper(c) && encrypted_char > 'Z'){
                encrypted_char -= 26;
            }
            result += encrypted_char;
        } else {
            result += c;
        }
    }
    return result;
}