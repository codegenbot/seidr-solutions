for(int i=0; i<message.length(); i++){
        if(isalpha(message[i])){
            if(isupper(message[i])){
                message[i] = tolower(message[i]);
            } else {
                message[i] = toupper(message[i]);
            }

            if(message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u'){
                message[i] = message[i] + 2;
            }
        }
    }

    return message;
}