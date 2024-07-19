string result = "";
    int shift = 2 * 2;
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char encryptedChar = 'a' + (c - 'a' + shift) % 26;
            result += encryptedChar;
        } else if (c >= 'A' && c <= 'Z') {
            char encryptedChar = 'A' + (c - 'A' + shift) % 26;
            result += encryptedChar;
        } else {
            result += c;
        }
    }
    return result;
}