string encrypted = "";
    for (char& c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (((c - base) + 2 * 2) % 26) + base;
        }
        encrypted += c;
    }
    return encrypted;
}