string encode(string message){
    string encodedMessage = "";
    for(int i = 0; i < message.length(); i++){
        if(isalpha(message[i])){
            if(isupper(message[i])){
                encodedMessage += tolower(message[i]);
            }else{
                encodedMessage += toupper(message[i]);
            }
            if(message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u'){
                encodedMessage += char(message[i] + 2);
            }
        }else{
            encodedMessage += message[i];
        }
    }
    return encodedMessage;
}