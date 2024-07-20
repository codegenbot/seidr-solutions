string encode(string message){
    for(char& c : message){
        if(isalpha(c)){
            c = toupper(c);
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = char(c + 2);
            }
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    return message;
}