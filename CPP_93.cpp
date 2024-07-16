string encode(string message){
    string encodedMessage = message;
    for(char &c : encodedMessage) {
        if(isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c = c + 2;
            }
        }
    }
    return encodedMessage;
}