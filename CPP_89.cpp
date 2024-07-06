std::string encrypt(std::string s){
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c == 'a' || c == 'A'){
            c = (c == 'a') ? '1' : 'A';
        } else if(c == 'e' || c == 'E'){
            c = (c == 'e') ? '2' : 'E';
        } else if(c == 'i' || c == 'I'){
            c = (c == 'i') ? '3' : 'I';
        } else if(c == 'o' || c == 'O'){
            c = (c == 'o') ? '4' : 'O';
        } else if(c == 'u' || c == 'U'){
            c = (c == 'u') ? '5' : 'U';
        }
        result += c;
    }
    return result;
}