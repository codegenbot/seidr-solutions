string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted_char = c + 2 * ('z' - c >= 2 ? 2 : -24);
            if (!isalpha(encrypted_char)) {
                encrypted_char -= 26;
            }
            encrypted += encrypted_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}