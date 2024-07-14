int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll < 2) {
                score += 10 - currentRoll;
            }
            currentRoll = 0;
        } else if (isdigit(c)) {
            currentRoll++;
        } else if (c == 'X') {
            score += 10;
            currentRoll = 0;
        } else if (c == '-') {
            continue;
        } else {
            int roll = c - '0';
            score += roll;
            currentRoll = 0;
        }
    }
    return score;
}