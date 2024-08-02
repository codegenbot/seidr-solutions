int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll = 2;
        } else if (c == '/') {
            score += 10 + currentRoll;
            currentRoll = 1;
        } else {
            int roll = c - '0';
            score += roll;
            currentRoll--;
        }
    }
    return score;
}