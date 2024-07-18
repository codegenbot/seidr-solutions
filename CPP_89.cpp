string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char newChar = c + 2 * ('z' - c) + 1;
            if(tolower(newChar) > 'z'){
                newChar -= 26;
            }
            encrypted += newChar;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}