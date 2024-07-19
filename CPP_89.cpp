string encrypted = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char newChar = 'a' + ((c - 'a' + 2) * 2) % 26;
            encrypted += newChar;
        } else if (c >= 'A' && c <= 'Z') {
            char newChar = 'A' + ((c - 'A' + 2) * 2) % 26;
            encrypted += newChar;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}