int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            int first = s[i-1] - '0';
            int second = s[i+1] - '0';
            score += first + second;
        } else if (isdigit(s[i])) {
            score += s[i] - '0';
        } else {
            score += 10;
        }
    }
    return score;
}