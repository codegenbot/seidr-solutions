string result = "";
    for(char &c : message){
        if(isalpha(c)){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                result += char(tolower(c) + 2);
            } else {
                if(isupper(c)){
                    result += tolower(c);
                } else {
                    result += toupper(c);
                }
            }
        } else {
            result += c;
        }
    }
    return result;
}