string encode(string message){
    string encodedMessage = "";
    for(int i=0; i<message.length(); i++){
        char c = message[i];
        if(isalpha(c)){
            if(isupper(c)){
                c = tolower(c);
            }else{
                c = toupper(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c += 2;
            }
        }
        encodedMessage += c;
    }
    return encodedMessage;
}