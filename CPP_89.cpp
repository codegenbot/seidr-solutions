string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encryptedChar = (c - 'a' + 2 * 2) % 26 + 'a';
            result += encryptedChar;
        } else {
            result += c;
        }
    }
    return result;
}