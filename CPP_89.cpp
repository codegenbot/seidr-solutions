string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            if (c >= 'a' && c <= 'z') {
                c = (char)('a' + (c - 'a' + 2 * 2) % 26);
            } else if (c >= 'A' && c <= 'Z') {
                c = (char)('A' + (c - 'A' + 2 * 2) % 26);
            }
        }
        encrypted += c;
    }
    return encrypted;
}