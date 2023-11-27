string encode(string message){
    string encodedMessage = "";
    
    for(int i=0; i<message.length(); i++){
        if(isalpha(message[i])){
            char c = toupper(message[i]);
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                encodedMessage += (char)(c + 2);
            }
            else{
                encodedMessage += (char)(isupper(message[i]) ? tolower(message[i]) : toupper(message[i]));
            }
        }
        else{
            encodedMessage += message[i];
        }
    }
    
    return encodedMessage;
}