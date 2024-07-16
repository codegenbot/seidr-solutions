int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int first = s[i - 1] - '0';
            int second = s[i + 1] - '0';
            score += first + second;
        } else {
            int count = 0;
            while (i < 10 && s[i] != '/' && s[i] != 'X') {
                count *= 10 + (s[i] - '0');
                i++;
            }
            if (count > 9) {
                score += 10 + count - 10;
            } else {
                score += count;
            }
        }
    }
    return score;
}