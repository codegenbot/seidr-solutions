int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    int pos = 0;
    while (pos < s.length()) {
        if (s[pos] == 'a') {
            apples = stoi(s.substr(pos + 1));
        } else if (s[pos] == 'o') {
            oranges = stoi(s.substr(pos + 1));
        }
        pos++;
    }
    return n - apples - oranges;
}