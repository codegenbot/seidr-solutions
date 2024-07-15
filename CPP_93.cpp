string encode(string message){
    string encoded_message = message;
    for(int i=0; i<message.length(); i++){
        if(isalpha(message[i])){
            if(islower(message[i])){
                encoded_message[i] = toupper(message[i]);
            } else {
                encoded_message[i] = tolower(message[i]);
            }
            if(message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u'){
                encoded_message[i] = message[i] + 2;
            }
        }
    }
    return encoded_message;
}