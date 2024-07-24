int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            roll1 = s[i - 1] - '0';
            roll2 = s[i + 1] - '0';
            score += roll1 + roll2;
        } else {
            roll1 = s[i] - '0';
            if (i < 8) {
                if (s[i + 1] == 'X' || s[i + 2] == '/') {
                    score += roll1 * 2;
                } else {
                    score += roll1 + roll1;
                }
            } else {
                score += roll1;
            }
        }
    }

    return score;
}