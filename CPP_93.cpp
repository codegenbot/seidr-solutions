string encode(string message){
    for(char &c : message){
        if(isalpha(c)){
            if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
                c = isupper(c) ? toupper(((c - 'A' + 2) % 26) + 'A') : tolower(((c - 'a' + 2) % 26) + 'a');
            } else {
                c = isupper(c) ? tolower(c) : toupper(c);
            }
        }
    }
    return message;
}