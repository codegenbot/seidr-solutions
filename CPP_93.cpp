string encode(string message){
    string encodedMessage = "";

    for(int i=0; i<message.length(); i++){
        char c = message[i];

        if(isalpha(c)){
            if(isupper(c)){
                c = tolower(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
            else{
                c = toupper(c);
            }
        }
        encodedMessage += c;
    }

    return encodedMessage;
}