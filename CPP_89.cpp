string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char base = islower(c) ? 'a' : 'A';
            char encryptedChar = (c - base + 2 * 2) % 26 + base;
            encrypted += encryptedChar;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}