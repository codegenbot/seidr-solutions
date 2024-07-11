string encode(string message){
    for(int i=0; i<message.length(); i++){
        if(isalpha(message[i])){
            message[i] = toupper(message[i]);
            if(message[i] == 'A' || message[i] == 'E' || message[i] == 'I' || message[i] == 'O' || message[i] == 'U'){
                message[i] = message[i] + 2;
            }
            message[i] = islower(message[i]) ? toupper(message[i]) : tolower(message[i]);
        }
    }
    return message;
}