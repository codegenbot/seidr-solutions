string encode(string message){
    transform(message.begin(), message.end(), message.begin(), [](char c) {
        if(isalpha(c)){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                return char(int(c) + 2);
            } else {
                if(islower(c)){
                    return toupper(c);
                } else {
                    return tolower(c);
                }
            }
        }
        return c;
    });
    return message;
}