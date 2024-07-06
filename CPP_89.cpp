string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int index = (int)(c - 'a' + 1) % 26;
            result += 'a' + index;
        } else if (c >= 'A' && c <= 'Z') {
            int index = (int)(c - 'A' + 1) % 26;
            result += 'A' + index;
        } else {
            result += c;
        }
    }
    return result;
}