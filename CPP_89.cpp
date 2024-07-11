string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char encryptedChar = c + 2 * ('z' - c) + 1;
            if(tolower(encryptedChar) > 'z'){
                encryptedChar -= 26;
            }
            encrypted += encryptedChar;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}