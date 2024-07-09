string encode(string message){
    for(int i=0; i<message.length(); i++){
        if(isalpha(message[i])){
            if(tolower(message[i]) == 'a' || tolower(message[i]) == 'e' || tolower(message[i]) == 'i' || tolower(message[i]) == 'o' || tolower(message[i]) == 'u'){
                if(isupper(message[i])){
                    message[i] = toupper((char)(((int)message[i] + 2 - 65) % 26 + 65));
                }
                else{
                    message[i] = tolower((char)(((int)message[i] + 2 - 97) % 26 + 97));
                }
            }
            else{
                if(isupper(message[i])){
                    message[i] = tolower(message[i]);
                }
                else{
                    message[i] = toupper(message[i]);
                }
            }
        }
    }
    return message;
}