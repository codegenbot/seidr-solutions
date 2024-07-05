int bowlingScore(const char* s) {
    int score = 0;
    int currentRoll1 = 0;
    int currentRoll2 = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'X') {
            score += 10 + bowlingScore(&s[i+1]) - 30; 
        } else if (s[i] == '/') {
            score += 10;
            int spareRoll = bowlingScore(&s[i+1]) - 10;
            score += spareRoll;
        } else {
            int roll = s[i] - '0';
            if (currentRoll1 == 0) {
                currentRoll1 = roll;
                currentRoll2 = 0;
            } else {
                currentRoll1 += roll;
                if (currentRoll1 < 10) {
                    currentRoll2 = roll;
                } else {
                    score += currentRoll1 + currentRoll2;
                    currentRoll1 = 0;
                    currentRoll2 = 0;
                }
            }
        }
    }
    return score;
}