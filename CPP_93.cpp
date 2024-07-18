string encode(string message){
    string encoded = message;
    transform(encoded.begin(), encoded.end(), encoded.begin(), [](char c){
        if(isalpha(c)){
            if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
                if(islower(c)){
                    c = (c - 'a' + 2) % 26 + 'a';
                } else {
                    c = (c - 'A' + 2) % 26 + 'A';
                }
            } else {
                if(islower(c)){
                    c = toupper(c);
                } else {
                    c = tolower(c);
                }
            }
        }
        return c;
    });
    return encoded;
}