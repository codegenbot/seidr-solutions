string encode(string message){
    string encodedMessage = "";
    for(char c : message){
        if(isalpha(c)){
            if(isupper(c)){
                c = tolower(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                encodedMessage += char(c + 2);
            } else {
                encodedMessage += isupper(c) ? toupper(c) : c;
            }
        } else {
            encodedMessage += c;
        }
    }
    return encodedMessage;
}