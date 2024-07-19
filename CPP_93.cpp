string encode(string message){
    string encoded_message = message;
    for(char& c : encoded_message){
        if(isalpha(c)){
            if(isupper(c)){
                c = tolower(c);
            } else {
                c = toupper(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
        }
    }
    return encoded_message;
}