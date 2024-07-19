string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted = c + 2 * ('z' - c) + 1;
            if(tolower(encrypted) > 'z'){
                encrypted -= 26;
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}