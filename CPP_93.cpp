transform(message.begin(), message.end(), message.begin(), ::toupper);
    for(int i=0; i<message.size(); i++){
        if(message[i]=='A' || message[i]=='E' || message[i]=='I' || message[i]=='O' || message[i]=='U'){
            message[i] = message[i] + 2;
        }
        if(message[i]>'Z'){
            message[i] = message[i] - 26;
        }
    }
    return message;
}