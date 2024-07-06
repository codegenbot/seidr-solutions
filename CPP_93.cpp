string encode(string message){
    string result = "";
    for(int i=0; i<message.length(); i++){
        char c = message[i];
        if(isalpha(c)){
            if(isupper(c)){
                if(c == 'W' || c == 'X' || c == 'Y') continue;
                else{
                    c = (char)(c - 65 + 3)%26 + 65;
                }
            }else if(islower(c)){
                if(c == 'w' || c == 'x' || c == 'y') continue;
                else{
                    c = (char)(c - 97 + 3)%26 + 97;
                }
            }
        }
        result += c;
    }
    return result;
}