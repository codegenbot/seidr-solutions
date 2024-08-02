string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int pos = c - 'a';
            c = ('a' + (pos + 4 * 2) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            int pos = c - 'A';
            c = ('A' + (pos + 4 * 2) % 26);
        }
        result += c;
    }
    return result;
}