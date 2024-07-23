string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int pos = (int)c - 97;
            pos = (pos + 2*2) % 26;
            result += (char)(pos + 97);
        } else if (c >= 'A' && c <= 'Z') {
            int pos = (int)c - 65;
            pos = (pos + 2*2) % 26;
            result += (char)(pos + 65);
        } else {
            result += c;
        }
    }
    return result;
}