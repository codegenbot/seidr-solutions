string encrypt(string s){
    string encrypted = "";
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            char base = isupper(s[i]) ? 'A' : 'a';
            char encryptedChar = ((s[i] - base + 2 * 2) % 26) + base;
            encrypted += encryptedChar;
        } else{
            encrypted += s[i];
        }
    }
    return encrypted;
}