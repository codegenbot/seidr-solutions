string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encryptedChar = c + ((tolower(c) - 'a') * 2 + 2);
            if(tolower(encryptedChar) > 'z'){
                encryptedChar -= 26;
            }
            result += encryptedChar;
        } else {
            result += c;
        }
    }
    return result;
}