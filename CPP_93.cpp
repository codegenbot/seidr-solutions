string encode(string message){
    string encodedMessage = message;
    for(char& c : encodedMessage){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c += 2;
            }
        }
    }
    return encodedMessage;
}