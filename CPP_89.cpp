string encrypt(string s){
    string encrypted = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            char encryptedChar = 'a' + ((s[i] - 'a' + 2 * 2) % 26);
            encrypted += encryptedChar;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            char encryptedChar = 'A' + ((s[i] - 'A' + 2 * 2) % 26);
            encrypted += encryptedChar;
        }
        else{
            encrypted += s[i];
        }
    }
    return encrypted;
}