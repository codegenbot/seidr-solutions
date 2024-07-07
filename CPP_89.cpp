string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int index = (int)c - 97;
            index = (index + 2 * 2) % 26;
            result += (char)(index + 97);
        } else if (c >= 'A' && c <= 'Z') {
            int index = (int)c - 65;
            index = (index + 2 * 2) % 26;
            result += (char)(index + 65);
        } else {
            result += c;
        }
    }
    return result;
}