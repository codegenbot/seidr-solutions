string encode(string message){
    string encoded_message = "";
    for(char c : message){
        if(isalpha(c)){
            if(isupper(c)){
                c = tolower(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
            c = toupper(c);
        }
        encoded_message += c;
    }
    return encoded_message;
}