int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == 'a') {
            apples = stoi(s.substr(i + 1));
        } else if (s[i] == 'o') {
            oranges = stoi(s.substr(i + 1));
        }
        i++;
    }
    return n - apples - oranges;
}