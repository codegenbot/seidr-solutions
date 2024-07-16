string encode(string message){
    string encoded_message = "";
    for(char c : message){
        if(isalpha(c)){
            if(isupper(c)){
                encoded_message += tolower(c);
            }
            else{
                encoded_message += toupper(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                encoded_message += c + 2;
            }
            else{
                encoded_message += c;
            }
        }
        else{
            encoded_message += c;
        }
    }
    return encoded_message;
}