string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encryptedChar = c + 2 * 2;
            if (islower(c)) {
                if (encryptedChar > 'z') {
                    encryptedChar = 'a' + (encryptedChar - 'z' - 1);
                }
            } else {
                if (encryptedChar > 'Z') {
                    encryptedChar = 'A' + (encryptedChar - 'Z' - 1);
                }
            }
            result += encryptedChar;
        } else {
            result += c;
        }
    }
    return result;
}