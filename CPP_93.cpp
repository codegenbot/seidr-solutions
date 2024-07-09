transform(message.begin(), message.end(), message.begin(), ::toupper);
    for(char& c: message){
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            c = char(c + 2);
        }
        if(isalpha(c)){
            if(isupper(c)){
                c = tolower(c);
            } else {
                c = toupper(c);
            }
        }
    }
    return message;
}