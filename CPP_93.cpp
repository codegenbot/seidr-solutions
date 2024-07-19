string encode(string message){
    for(int i = 0; i < message.length(); i++){
        if(isalpha(message[i])){
            if(isupper(message[i])){
                message[i] = tolower(message[i]);
            }
            if(message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u'){
                message[i] = char(((message[i] - 'a' + 2) % 26) + 'a');
            }
            message[i] = isupper(message[i]) ? tolower(message[i]) : toupper(message[i]);
        }
    }
    return message;
}