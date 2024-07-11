string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            char encrypted_char = base + (c - base + 2 * 2) % 26;
            encrypted += encrypted_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}