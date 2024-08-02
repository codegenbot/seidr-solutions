string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int pos = (int)c - 'a';
            result += ((pos + 2 * 26) % 26) + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            int pos = (int)c - 'A';
            result += ((pos + 2 * 26) % 26) + 'A';
        } else {
            result += c;
        }
    }
    return result;
}