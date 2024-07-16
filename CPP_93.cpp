string encode(string message){
    string result = "";
    for(char c : message){
        if(isalpha(c)){
            if(islower(c)){
                result += toupper(c);
            } else {
                result += tolower(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                result += char(c + 2);
            }
        } else {
            result += c;
        }
    }
    return result;
}