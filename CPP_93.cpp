string encode(string message){
    string encodedMessage = "";
    for(char c : message){
        if(isalpha(c)){
            char encodedChar = islower(c) ? toupper(c) : tolower(c);
            if(encodedChar == 'A' || encodedChar == 'E' || encodedChar == 'I' || encodedChar == 'O' || encodedChar == 'U'){
                encodedChar = static_cast<char>(encodedChar + 2);
            }
            encodedMessage += encodedChar;
        } else {
            encodedMessage += c;
        }
    }
    return encodedMessage;
}