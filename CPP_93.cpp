for(char &c : message){
        if(isalpha(c)){
            c = toupper(c);
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = c + 2;
            }
            if(c > 'Z'){
                c = c - 26;
            }
        }
    }
    return message;
}