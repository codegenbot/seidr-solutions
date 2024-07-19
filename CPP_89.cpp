string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char base = 'a';
            while ((c - base + 4) % 26 < 0) {
                base = 'z';
            }
            result += (base + (c - base + 4) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            char base = 'A';
            while ((c - base + 4) % 26 < 0) {
                base = 'Z';
            }
            result += (base + (c - base + 4) % 26);
        } else {
            result += c;
        }
    }
    return result;
}