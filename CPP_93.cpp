for(char &c : message){
    if(isalpha(c)){
        c = toupper(c);
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            c = char(int(c) + 2);
        }
    }
}
return message;