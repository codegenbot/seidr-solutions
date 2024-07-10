int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            int prev = s[i - 1] - '0';
            int next = s[i + 1] - '0';
            score += max(prev, next);
        } else if (s[i] == 'X') {
            score += 30;
        } else {
            int framescore = s[i] - '0' * 10 + s[i + 1] - '0';
            score += framescore;
        }
    }
    return score;
}