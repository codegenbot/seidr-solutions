string encode(string message){
    string encoded_message = "";
    for(char& c : message){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                encoded_message += char(c + 2);
            } else {
                encoded_message += c;
            }
        } else {
            encoded_message += c;
        }
    }
    return encoded_message;
}