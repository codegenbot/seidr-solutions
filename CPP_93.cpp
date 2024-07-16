for(auto &c : message){
        if(isalpha(c)){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = c + 2;
            }
            if(isupper(c)){
                c = tolower(c);
            } else {
                c = toupper(c);
            }
        }
    }
    return message;
}