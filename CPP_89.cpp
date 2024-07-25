string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char newChar = ((c - 'a' + 26 - 2*2) % 26) + 'a';
            result += newChar;
        } else if (c >= 'A' && c <= 'Z') {
            char newChar = ((c - 'A' + 26 - 2*2) % 26) + 'A';
            result += newChar;
        } else {
            result += c;
        }
    }
    return result;
}