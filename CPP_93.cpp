string encode(string message){
    string encodedMessage = "";
    for(char c : message){
        if(isalpha(c)){
            if(isupper(c)){
                encodedMessage += tolower(c);
            } else {
                encodedMessage += toupper(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                encodedMessage += c + 2;
            }
        } else {
            encodedMessage += c;
        }
    }
    return encodedMessage;
}