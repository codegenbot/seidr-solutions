string encode(string message){
    for(char &c : message){
        if(isalpha(c)){
            if(c >= 'A' && c <= 'Z'){
                c = tolower(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
                if(c > 'z'){
                    c = c - 26;
                }
            }
            c ^= 32;
        }
    }
    return message;
}