string encrypt(string s){
    string encrypted = "";
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(isalpha(c)){
            char encryptedChar = (c - 'a' + (2 * 2)) % 26 + 'a';
            encrypted += encryptedChar;
        }
        else{
            encrypted += c;
        }
    }
    return encrypted;
}