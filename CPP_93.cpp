string encode(string message){
    string encodedMessage = "";
    for(int i=0; i<message.length(); i++){
        if(isalpha(message[i])){
            if(islower(message[i])){
                encodedMessage += toupper(message[i]);
            }
            else{
                encodedMessage += tolower(message[i]);
            }
            if(message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u' ||
               message[i] == 'A' || message[i] == 'E' || message[i] == 'I' || message[i] == 'O' || message[i] == 'U'){
                encodedMessage += message[i] + 2;
            }
        }
        else{
            encodedMessage += message[i];
        }
    }
    return encodedMessage;
}