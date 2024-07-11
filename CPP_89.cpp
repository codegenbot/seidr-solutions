string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encryptedChar = 'a' + (c - 'a' + 2 * 2) % 26;
            result += encryptedChar;
        } else {
            result += c;
        }
    }
    return result;
}