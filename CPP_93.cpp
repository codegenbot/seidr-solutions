string encode(string message){
    string encodedMessage = message;
    for(char &c : encodedMessage){
        if(isalpha(c)){
            c = isupper(c) ? tolower(c) : toupper(c);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
        }
    }
    return encodedMessage;
}