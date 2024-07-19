for(auto& c : message){
        if(isalpha(c)){
            if(c >= 'a' && c <= 'z'){
                c = toupper(c);
                if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                    c = c + 2;
                }
            }
            else if(c >= 'A' && c <= 'Z'){
                c = tolower(c);
                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                    c = c + 2;
                }
            }
        }
    }
    return message;
}