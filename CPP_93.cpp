string encode(string message){
    string encodedMessage = "";
    for(int i = 0; i < message.length(); i++){
        char c = message[i];
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            }
            else{
                c = tolower(c);
            }
            if(c == 'A'){
                c = 'C';
            }
            else if(c == 'E'){
                c = 'G';
            }
            else if(c == 'I'){
                c = 'K';
            }
            else if(c == 'O'){
                c = 'Q';
            }
            else if(c == 'U'){
                c = 'W';
            }
        }
        encodedMessage += c;
    }
    return encodedMessage;
}