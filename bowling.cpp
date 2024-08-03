int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            int first = s[i - 1] - '0';
            int second = s[i + 1] - '0';
            score += first + second;
        } else if (s[i] == 'X') {
            score += 10;
        } else {
            int num = s[i] - '0';
            score += num;
        }
    }
    return score;
}