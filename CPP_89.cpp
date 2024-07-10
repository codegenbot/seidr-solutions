string encrypted = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char encryptedChar = 'a' + (c - 'a' + 2 * 2) % 26;
            encrypted += encryptedChar;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}