int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') continue;
        if (isdigit(s[i])) {
            int x = s[i] - '0';
            score += x + (i < 9 ? 1 : 2);
        } else {
            score += 10 + (i < 9 ? 1 : 2) - (s[i] == 'X');
        }
    }
    return score;
}