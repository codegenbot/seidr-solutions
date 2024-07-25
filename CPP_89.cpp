string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted_char = 'a' + (c - 'a' + 2 * 2) % 26;
            encrypted += encrypted_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}