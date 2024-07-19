string encode(string message){
    string encoded_message = message;
    transform(encoded_message.begin(), encoded_message.end(), encoded_message.begin(), [](char c) {
        if(isalpha(c)){
            if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
                return isupper(c) ? toupper((c+2)%26 + 'A') : tolower((c+2)%26 + 'a');
            }
            return isupper(c) ? tolower(c) : toupper(c);
        }
        return c;
    });
    return encoded_message;
}