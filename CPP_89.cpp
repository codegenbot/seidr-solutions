string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            encrypted += ((c - base + 2 * 2) % 26) + base;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}