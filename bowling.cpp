int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') continue;
        if (isdigit(s[i])) {
            score += (s[i] - '0') * 2;
        } else if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '-') {
            score -= 10;
        }
    }
    return score;
}