string encrypt(string s){
    string encrypted = "";
    for (int i = 0; i < s.length(); i++) {
        // Encrypt uppercase letters
        if (isupper(s[i])) {
            char encryptedChar = (s[i] - 'A' + 2 * 2) % 26 + 'A';
            encrypted += encryptedChar;
        }
        // Encrypt lowercase letters
        else if (islower(s[i])) {
            char encryptedChar = (s[i] - 'a' + 2 * 2) % 26 + 'a';
            encrypted += encryptedChar;
        }
        // Characters other than letters remain unchanged
        else {
            encrypted += s[i];
        }
    }
    return encrypted;
}