string encode(string message){
    string encoded_message = "";
    for(int i=0; i<message.length(); i++){
        char c = message[i];
        if(isalpha(c)){
            if(isupper(c)){
                encoded_message += tolower(c);
            }
            else{
                encoded_message += toupper(c);
            }
            if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
                encoded_message += c+2;
            }
        }
    }
    return encoded_message;
}