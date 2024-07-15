string encode(string message){
    string encoded_message = "";
    for(char c : message){
        if(isalpha(c)){
            c = toupper(c);
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                encoded_message += char(c + 2);
            } else {
                if(isupper(c)){
                    encoded_message += tolower(c);
                } else {
                    encoded_message += toupper(c);
                }
            }
        } else {
            encoded_message += c;
        }
    }
    return encoded_message;
}