string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int pos = c - 'a';
            pos = (pos + 4 * 2) % 26; // shift down by two multiplied to two places
            result += 'a' + pos;
        } else if (c >= 'A' && c <= 'Z') {
            int pos = c - 'A';
            pos = (pos + 4 * 2) % 26; // shift down by two multiplied to two places
            result += 'A' + pos;
        } else {
            result += c;
        }
    }
    return result;
}