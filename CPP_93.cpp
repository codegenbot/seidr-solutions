string encode(string message){
    string encoded_message = "";
    for(char& c : message){
        if(isalpha(c)){
            if(isupper(c)){
                c = tolower(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = char(c + 2);
            }
            if(c == 'z'){
                c = 'b';
            }
            else{
                c = char(c + 1);
            }
            if(isupper(message)){
                c = toupper(c);
            }
        }
        encoded_message += c;
    }
    return encoded_message;
}