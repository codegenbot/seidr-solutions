string encode(string message){
    string result = "";
    for(char c : message){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            }else{
                c = tolower(c);
            }
            if(c == 'A') c = 'C';
            else if(c == 'E') c = 'G';
            else if(c == 'I') c = 'K';
            else if(c == 'O') c = 'Q';
            else if(c == 'U') c = 'W';
        }
        result += c;
    }
    return result;
}