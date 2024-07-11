string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted_char = c + 2 * (c >= 'a' ? 1 : -1);
            if ((c >= 'a' && encrypted_char > 'z') || (c <= 'Z' && encrypted_char > 'Z')) {
                encrypted_char -= 26;
            }
            encrypted += encrypted_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}