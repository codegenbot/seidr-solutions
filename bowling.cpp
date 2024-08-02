int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            roll1 = s[i - 1] - '0';
            roll2 = s[i + 1] - '0';
            score += roll1 + roll2;
        } else {
            int roll = s[i] - 'X' + 10;
            score += roll;
        }
    }
    return score;
}