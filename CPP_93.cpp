transform(message.begin(), message.end(), message.begin(), [](char c) {
        if(isalpha(c)){
            if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
                return isupper(c) ? toupper((c - 'A' + 2) % 26 + 'A') : (c - 'a' + 2) % 26 + 'a';
            }
            return isupper(c) ? tolower(c) : toupper(c);
        }
        return c;
    });
    return message;
}