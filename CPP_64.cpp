int vowels_count(string s) {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int count = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            count++;
        }
    }
    if (!s.empty() && (s.back() == 'Y' || s.back() == 'y')) {
        count++;
    }
    return count;
}