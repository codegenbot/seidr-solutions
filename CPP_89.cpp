string encrypted = "";
    int shift = 2 * 2;
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            encrypted += static_cast<char>((c - base + shift) % 26 + base);
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}