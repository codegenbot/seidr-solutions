string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            char encryptedChar = base + (c - base + 2) * 2 % 26;
            encrypted += encryptedChar;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}