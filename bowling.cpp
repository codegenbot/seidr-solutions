int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int next = s.find('/', i);
            int first = s[i + 1] - '0';
            int second = s[next - 1] - '0';
            score += first + second;
        } else {
            int roll = 0;
            for (int j = i; j < i + 2; j++) {
                if (j == 10) break;
                roll += s[j] - '0';
            }
            score += roll;
        }
    }
    return score;
}