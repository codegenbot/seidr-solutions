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
        }
        else{
            encodedMessage += message[i];
        }
    }
    for(int i=0; i<encodedMessage.length(); i++){
        if(encodedMessage[i]=='a' || encodedMessage[i]=='A'){
            encodedMessage[i] = 'c';
        }
        else if(encodedMessage[i]=='e' || encodedMessage[i]=='E'){
            encodedMessage[i] = 'g';
        }
        else if(encodedMessage[i]=='i' || encodedMessage[i]=='I'){
            encodedMessage[i] = 'k';
        }
        else if(encodedMessage[i]=='o' || encodedMessage[i]=='O'){
            encodedMessage[i] = 'q';
        }
        else if(encodedMessage[i]=='u' || encodedMessage[i]=='U'){
            encodedMessage[i] = 'w';
        }
    }
    return encodedMessage;
}