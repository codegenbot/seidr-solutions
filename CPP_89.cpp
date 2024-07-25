string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char base = 'a';
            int shift = 2 * 2;
            result += (char)((c - base + shift) % 26 + base);
        } else if (c >= 'A' && c <= 'Z') {
            char base = 'A';
            int shift = 2 * 2;
            result += (char)((c - base + shift) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}