string encode(string message){
    for(auto &c : message){
        if(isalpha(c)){
            if(c >= 'a' && c <= 'z'){
                c = toupper(c);
                c = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') ? c + 2 : c;
            } else {
                c = tolower(c);
                c = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? c + 2 : c;
            }
        }
    }
    return message;
}