string encode(string message){
    for(char &c : message){
        if(isalpha(c)){
            if(isupper(c)) c = tolower(c);
            else c = toupper(c);

            if(c == 'a' || c == 'A') c = c + 2;
            else if(c == 'e' || c == 'E') c = c + 2;
            else if(c == 'i' || c == 'I') c = c + 2;
            else if(c == 'o' || c == 'O') c = c + 2;
            else if(c == 'u' || c == 'U') c = c + 2;
        }
    }
    return message;
}