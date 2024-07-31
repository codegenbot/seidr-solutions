string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char encryptedChar = c + 2 * ('z' - c) + 2;
            if(isupper(c)){
                if(encryptedChar > 'Z'){
                    encryptedChar = 'A' + (encryptedChar - 'Z' - 1);
                }
            } else {
                if(encryptedChar > 'z'){
                    encryptedChar = 'a' + (encryptedChar - 'z' - 1);
                }
            }
            encrypted += encryptedChar;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}