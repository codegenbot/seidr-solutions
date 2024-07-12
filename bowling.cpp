int calculateBowlingScore(const string& s) {
    int score = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            if (s[i + 2] == 'X' || s[i + 3] == 'X') {
                score += 20;
            } else {
                score += 10 + (s[i + 1] == 'X' ? 10 : (s[i + 1] - '0')) + (s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : (s[i + 2] == 'X' ? 10 : (s[i + 2] - '0')));
            }
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0') + (s[i + 1] == 'X' ? 10 : (s[i + 1] - '0'));
        } else if (s[i] != '-') {
            score += s[i] - '0';
        }
    }
    return score;
}