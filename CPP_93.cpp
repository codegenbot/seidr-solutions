transform(message.begin(), message.end(), message.begin(), [](char c){
        if(isalpha(c)){
            if(isupper(c)){
                if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                    return (char)((c - 'A' + 2) % 26 + 'A');
                }
                return tolower(c);
            }
            else{
                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                    return (char)((c - 'a' + 2) % 26 + 'a');
                }
                return toupper(c);
            }
        }
        return c;
    });
    return message;
}