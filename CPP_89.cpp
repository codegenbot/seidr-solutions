string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int pos = (int)(c - 'a');
            pos = (pos + 2 * 26) % 26;
            result += (char)(pos + 'a');
        } else if (c >= 'A' && c <= 'Z') {
            int pos = (int)(c - 'A');
            pos = (pos + 2 * 26) % 26;
            result += (char)(pos + 'A');
        } else {
            result += c;
        }
    }
    return result;
}