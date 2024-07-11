string encrypt(string s){
    string encrypted = "";
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            char base = islower(s[i]) ? 'a' : 'A';
            char encryptedChar = base + (s[i] - base + 2 * 2) % 26;
            encrypted += encryptedChar;
        } else {
            encrypted += s[i];
        }
    }
    return encrypted;
}