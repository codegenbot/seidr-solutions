int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll++;
        } else if (c == '/') {
            score += 10 + currentRoll;
            currentRoll = 0;
        } else {
            int roll = c - '0';
            if (currentRoll > 1) {
                score += roll * 2;
            } else {
                score += roll;
            }
            currentRoll++;
        }
    }
    return score;
}