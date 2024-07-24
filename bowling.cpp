int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            roll1 = s[i-1] - '0';
            roll2 = s[i+1] - '0';
            score += roll1 + roll2;
        } else {
            roll1 = s[i] - '0';
            roll2 = s[i+1] - '0';
            if (roll1 == 10) {
                score += 10 + roll2;
            } else {
                score += roll1 + roll2;
            }
        }
    }

    return score;
}