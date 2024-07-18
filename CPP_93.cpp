string encode(string message){
    string encoded_message = message;
    
    for(char &c : encoded_message){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = c + 2;
            }
        }
    }
    
    return encoded_message;
}