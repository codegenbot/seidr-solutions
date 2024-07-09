string encrypt(string s) {
    string result = s;
    for (char& c : result) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = base + (c - base + 2 * 2) % 26;
        }
    }
    return result;
}