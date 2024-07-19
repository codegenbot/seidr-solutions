transform(message.begin(), message.end(), message.begin(), [](char c){
        if(isalpha(c)){
            if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
                return isupper(c) ? toupper((c + 2 - 'A') % 26 + 'A') : (c + 2 - 'a') % 26 + 'a';
            } else {
                return isupper(c) ? tolower(c) : toupper(c);
            }
        } else {
            return c;
        }
    });
    return message;
}