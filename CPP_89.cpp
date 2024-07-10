string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int newIndex = (c - 'a' + 2 * 26) % 26;
            result += ('a' + newIndex);
        } else if (c >= 'A' && c <= 'Z') {
            int newIndex = (c - 'A' + 2 * 26) % 26;
            result += ('A' + newIndex);
        } else {
            result += c;
        }
    }
    return result;
}