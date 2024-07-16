string encode(string message){
    for(char &c : message){
        if(isalpha(c)){
            if(c >= 'a' && c <= 'z'){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = c + 2;
            }
        }
    }
    return message;
}