int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + roll;
            roll = 0;
        } else {
            int currentRoll = c - '0';
            score += currentRoll;
            if (roll < 1) {
                roll = 1;
            }
        }
    }
    return score;
}