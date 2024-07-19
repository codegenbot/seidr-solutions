transform(message.begin(), message.end(), message.begin(), [](char c) {
        if(isalpha(c)){
            if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
                return isupper(c) ? char(toupper((c+2-'A')%26+'A')) : char(tolower((c+2-'a')%26+'a'));
            } else {
                return isupper(c) ? char(tolower(c)) : char(toupper(c));
            }
        }
        return c;
    });
    return message;
}