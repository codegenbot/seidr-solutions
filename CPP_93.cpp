string encode(string message){
    for(int i=0; i<message.length(); i++){
        if(isalpha(message[i])){
            if(islower(message[i])){
                if(message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u'){
                    message[i] = toupper((message[i] + 2 - 'a') % 26 + 'a');
                } else {
                    message[i] = toupper(message[i]);
                }
            } else {
                if(message[i] == 'A' || message[i] == 'E' || message[i] == 'I' || message[i] == 'O' || message[i] == 'U'){
                    message[i] = (message[i] + 2 - 'A') % 26 + 'A';
                }
            }
            message[i] = isupper(message[i]) ? tolower(message[i]) : toupper(message[i]);
        }
    }
    return message;
}