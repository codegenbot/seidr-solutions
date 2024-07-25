string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int newCharIndex = ((int)c - 97 + 2 * 2) % 26;
            result += (char)(newCharIndex + 97);
        } else if (c >= 'A' && c <= 'Z') {
            int newCharIndex = ((int)c - 65 + 2 * 2) % 26;
            result += (char)(newCharIndex + 65);
        } else {
            result += c;
        }
    }
    return result;
}