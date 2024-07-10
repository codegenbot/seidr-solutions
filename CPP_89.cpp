string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int newChar = ((c - 'a' + 26 - 2*2) % 26) + 'a';
            result += char(newChar);
        } else if (c >= 'A' && c <= 'Z') {
            int newChar = ((c - 'A' + 26 - 2*2) % 26) + 'A';
            result += char(newChar);
        } else {
            result += c;
        }
    }
    return result;
}