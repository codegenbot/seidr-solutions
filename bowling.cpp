int calculateBowlingScore(const std::string& s) {
    int total = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (isdigit(s[i])) {
            total += s[i] - '0';
        } else if (s[i] == 'X') {
            total += 10 + ((s[i + 1] == 'X') ? (10 + ((i + 2 < s.size() && s[i + 2] == 'X') ? 10 : (i + 2 < s.size() && isdigit(s[i + 2]) ? s[i + 2] - '0' : 0))) : ((i + 2 < s.size() && s[i + 2] == '/') ? 10 : (i + 1 < s.size() && s[i + 1] == '/' ? (10 - (s[i + 2] - '0')) : (i + 1 < s.size() && isdigit(s[i + 1]) ? (s[i + 1] - '0') : 0)));
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
        }
    }
    return total;
}