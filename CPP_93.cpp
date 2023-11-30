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
            if(message[i] == 'a' || message[i] == 'A'){
                encodedMessage += 'C';
            }
            else if(message[i] == 'e' || message[i] == 'E'){
                encodedMessage += 'G';
            }
            else if(message[i] == 'i' || message[i] == 'I'){
                encodedMessage += 'K';
            }
            else if(message[i] == 'o' || message[i] == 'O'){
                encodedMessage += 'Q';
            }
            else if(message[i] == 'u' || message[i] == 'U'){
                encodedMessage += 'W';
            }
            else{
                encodedMessage += message[i];
            }
        }
        else{
            encodedMessage += message[i];
        }
    }
    return encodedMessage;
}