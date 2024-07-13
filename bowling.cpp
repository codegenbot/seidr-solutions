int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else if (c == '/') {
            score += 10 + currentRoll;
            currentRoll = 0;
        } else {
            int roll = c - '0';
            currentRoll += roll;
            if (currentRoll >= 10) {
                score += 10 + roll - 1;
                currentRoll = 0;
            }
        }
    }
    return score;
}