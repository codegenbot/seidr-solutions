string encode(string message){
    for(int i=0; i<message.size(); ++i){
        if(isalpha(message[i])){
            message[i] = islower(message[i]) ? toupper(message[i]) : tolower(message[i]);
            if(message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u'){
                message[i] = message[i] + 2;
            }
        }
    }
    return message;
}