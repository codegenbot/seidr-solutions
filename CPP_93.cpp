transform(message.begin(), message.end(), message.begin(), [](char c){
        if(isalpha(c)){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                return (char)(c + 2);
            }
            return isupper(c) ? tolower(c) : toupper(c);
        }
        return c;
    });
    return message;
}