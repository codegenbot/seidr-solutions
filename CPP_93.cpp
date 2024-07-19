string encode(string message){
    string encoded_message = "";
    for(char c : message){
        if(isalpha(c)){
            if(isupper(c)){
                c = tolower(c);
                c = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? c + 2 : toupper(c);
            } else {
                c = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? c + 2 : c;
            }
        }
        encoded_message += c;
    }
    return encoded_message;
}