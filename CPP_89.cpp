string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char encryptedChar = islower(c) ? 'a' + (c - 'a' + 2 * 2) % 26 : 'A' + (c - 'A' + 2 * 2) % 26;
            encrypted += encryptedChar;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}