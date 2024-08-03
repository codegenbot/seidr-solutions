string encode(string message){
    for(char &c : message){
        if(isalpha(c)){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = c + 2;
            }
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    return message;
}