int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // strike
            score += 10 + (i < 9 ? 10 : 0);
        } else if (s[i] == '/') { // spare
            int roll1 = s[i - 1] - '0';
            int roll2 = s[i + 1] - '0';
            score += 10 + roll1 + roll2;
        } else {
            int roll1 = s[i] - '0';
            int roll2 = s[i + 1] - '0';
            if (roll1 + roll2 == 10) { // spare
                score += 10 + roll1;
            } else {
                score += roll1 + roll2;
            }
        }
    }
    return score;
}