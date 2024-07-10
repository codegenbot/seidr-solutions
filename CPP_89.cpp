string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted_char = c + 2 * 2;
            if (islower(c) && encrypted_char > 'z') {
                encrypted_char = 'a' + (encrypted_char - 'z' - 1);
            } else if (isupper(c) && encrypted_char > 'Z') {
                encrypted_char = 'A' + (encrypted_char - 'Z' - 1);
            }
            encrypted += encrypted_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}