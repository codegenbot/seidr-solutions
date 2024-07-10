string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char newChar = (c - 'a' + 26) % 26;
            result += 'a' + newChar;
        } else if (c >= 'A' && c <= 'Z') {
            char newChar = (c - 'A' + 26) % 26;
            result += 'A' + newChar;
        } else {
            result += c;
        }
    }
    return result;
}