string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int newChar = ((int)c - 97 + 2 * 26) % 26 + 97;
            result += (char)newChar;
        } else if (c >= 'A' && c <= 'Z') {
            int newChar = ((int)c - 65 + 2 * 26) % 26 + 65;
            result += (char)newChar;
        } else {
            result += c;
        }
    }
    return result;
}