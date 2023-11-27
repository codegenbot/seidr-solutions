string encode(string message){
    string encodedMessage = "";
    for(int i=0; i<message.length(); i++){
        char c = message[i];
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            }
            else{
                c = tolower(c);
            }
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = c + 2;
            }
        }
        encodedMessage += c;
    }
    return encodedMessage;
}