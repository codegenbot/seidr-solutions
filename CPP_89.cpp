string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (char)((c - base + 26) % 26);
            result += c;
        } else {
            result += c;
        }
    }
    return result;
}