string encode(string message){
    string encodedMessage = "";
    for(char c : message){
        if(isalpha(c)){
            if(islower(c)){
                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                    encodedMessage += char(tolower((c + 2 - 'a') % 26 + 'a'));
                } else {
                    encodedMessage += toupper(c);
                }
            } else if(isupper(c)){
                if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                    encodedMessage += char(toupper((c + 2 - 'A') % 26 + 'A'));
                } else {
                    encodedMessage += tolower(c);
                }
            }
        } else {
            encodedMessage += c;
        }
    }
    return encodedMessage;
}