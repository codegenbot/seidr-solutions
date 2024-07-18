string encode(string message){
    string encoded_message = "";
    for(char c : message){
        if(isalpha(c)){
            char encoded_char = (isupper(c)) ? tolower(c) : toupper(c);
            if(encoded_char == 'a' || encoded_char == 'e' || encoded_char == 'i' || encoded_char == 'o' || encoded_char == 'u'){
                encoded_message += char(encoded_char + 2);
            } else {
                encoded_message += encoded_char;
            }
        } else {
            encoded_message += c;
        }
    }
    return encoded_message;
}