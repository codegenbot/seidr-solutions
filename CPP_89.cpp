string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += (((c - base + 2 * 2) % 26) + base);
        } else {
            result += c;
        }
    }
    return result;
}