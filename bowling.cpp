int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll = 2;
        } else if (c == '/') {
            score += 10 + roll;
            roll = 0;
        } else {
            int currentRoll = c - '0';
            if (roll > 0) {
                score += currentRoll;
            } else {
                score += 10;
                roll = currentRoll;
            }
        }
    }
    return score;
}