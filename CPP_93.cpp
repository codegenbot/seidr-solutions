string encode(string message){
    string encodedMessage = "";
    for(char c : message){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                encodedMessage += char(c + 2);
            } else {
                encodedMessage += c;
            }
        } else {
            encodedMessage += c;
        }
    }
    return encodedMessage;
}