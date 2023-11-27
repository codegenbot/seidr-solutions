string encrypt(string s){
    string encrypted = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            char encryptedChar = s[i] + (2 * 2);
            if (encryptedChar > 'z') {
                encryptedChar = 'a' + (encryptedChar - 'z') - 1;
            }
            encrypted += encryptedChar;
        } else {
            encrypted += s[i];
        }
    }
    return encrypted;
}