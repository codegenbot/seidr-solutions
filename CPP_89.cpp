string encrypt(string s){
    string encrypted = "";
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            if(islower(s[i])){
                char encryptedChar = ((s[i] - 'a') + (2 * 2)) % 26 + 'a';
                encrypted += encryptedChar;
            }
            else{
                char encryptedChar = ((s[i] - 'A') + (2 * 2)) % 26 + 'A';
                encrypted += encryptedChar;
            }
        }
        else{
            encrypted += s[i];
        }
    }
    return encrypted;
}