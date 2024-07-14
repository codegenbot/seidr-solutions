int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, bonus = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
            if (i < 8 && s[i+1] != '/') {
                bonus = 10;
            }
        } else if (s[i] == '/') {
            roll1 = s[i-1] - '0';
            roll2 = s[i+1] - '0';
            score += roll1 + roll2;
        } else {
            roll1 = s[i] - '0';
            roll2 = s[i+1] - '0';
            if (roll1 + roll2 == 10) {
                bonus = 10;
            }
            score += roll1 + roll2;
        }
    }
    return score + bonus;
}