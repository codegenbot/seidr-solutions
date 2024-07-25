int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int left = s[i - 1] - '0';
            int right = s[i + 1] - '0';
            score += left * 10 + right;
        } else {
            score += (s[i] - '0') * 10 + (s[i + 1] - '0');
        }
    }
    return score;
}