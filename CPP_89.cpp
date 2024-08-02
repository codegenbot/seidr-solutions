string encrypt(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c = (char)((c - 'a' + 26) % 26 + 'a');
        } else if (c >= 'A' && c <= 'Z') {
            c = (char)((c - 'A' + 26) % 26 + 'A');
        }
        result += c;
    }
    return result;
}