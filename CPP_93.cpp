string encode(string message){
    string encoded_message = message;
    transform(encoded_message.begin(), encoded_message.end(), encoded_message.begin(), [](char c) {
        if(isalpha(c)){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                return static_cast<char>((c + 2 - 'A') % 26 + 'A');
            }
            else{
                if(islower(c)){
                    return toupper(c);
                }
                else{
                    return tolower(c);
                }
            }
        }
        return c;
    });
    return encoded_message;
}