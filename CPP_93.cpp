string encode(string message){
    string encodedMessage = "";
    for(int i = 0; i < message.length(); i++){
        if(isalpha(message[i])){
            if(islower(message[i])){
                encodedMessage += toupper(message[i]);
            } else {
                encodedMessage += tolower(message[i]);
            }
            if(message[i] == 'a' || message[i] == 'A'){
                encodedMessage += 'c';
            } else if(message[i] == 'e' || message[i] == 'E'){
                encodedMessage += 'g';
            } else if(message[i] == 'i' || message[i] == 'I'){
                encodedMessage += 'k';
            } else if(message[i] == 'o' || message[i] == 'O'){
                encodedMessage += 'q';
            } else if(message[i] == 'u' || message[i] == 'U'){
                encodedMessage += 'w';
            } else {
                encodedMessage += message[i];
            }
        } else {
            encodedMessage += message[i];
        }
    }
    return encodedMessage;
}