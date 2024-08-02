int bowlingScore(string input) {
    int score = 0;
    int currentRoll = 0;
    for (char c : input) {
        if (c == 'X') {
            score += 30;
            currentRoll = 10;
        } else if (c == '/') {
            score += currentRoll;
            currentRoll = 0;
        } else {
            int roll = c - '0';
            if (currentRoll + roll > 10) {
                score += 10;
                currentRoll = 10 - roll;
            } else {
                score += roll;
                currentRoll -= roll;
            }
        }
    }
    return score;
}