int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') { // strike
            score += 10 + (i < 9 ? 10 : 0);
        } else if (s[i+1] == '/') { // spare
            roll1 = s[i] - '0';
            score += 10;
            if (i < 8) {
                roll2 = s[i+2] - '0';
                score += roll2;
            }
        } else { // normal frame
            roll1 = s[i] - '0';
            roll2 = s[i+1] - '0';
            score += roll1 + roll2;
        }
    }

    return score;
}