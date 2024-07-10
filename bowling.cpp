int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, prevRoll1, prevRoll2;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
            if (i < 9) {
                if (s[i + 1] != '/') {
                    roll1 = 10 - prevRoll2;
                    prevRoll1 = 10;
                } else {
                    prevRoll1 = 0;
                }
            } else {
                prevRoll1 = 0;
            }
        } else if (s[i] == '/') {
            score += prevRoll1 + prevRoll2;
            prevRoll2 = 0;
            prevRoll1 = 0;
        } else {
            roll1 = s[i] - '0';
            roll2 = s[i + 1] - '0';
            if (roll1 + roll2 == 10) {
                score += 10;
                prevRoll2 = roll1;
                prevRoll1 = 0;
            } else {
                score += roll1 + roll2;
                prevRoll2 = roll2;
                prevRoll1 = roll1;
            }
        }
    }

    return score;
}