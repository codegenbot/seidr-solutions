string encode(string message){
    string encodedMessage = "";
    for(int i=0; i<message.length(); i++){
        if(isalpha(message[i])){
            if(isupper(message[i])){
                encodedMessage += tolower(message[i]);
            }
            else{
                encodedMessage += toupper(message[i]);
            }
            if(tolower(message[i]) == 'a' || tolower(message[i]) == 'e' || tolower(message[i]) == 'i' || tolower(message[i]) == 'o' || tolower(message[i]) == 'u'){
                encodedMessage += char(tolower(message[i]) + 2);
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