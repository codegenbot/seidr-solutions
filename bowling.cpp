int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll > 9) {
                score += 10 + (currentRoll - 10);
            } else {
                score += 10;
            }
            currentRoll = 0;
        } else if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else {
            int roll = c - '0';
            currentRoll += roll;
        }
    }
    if (currentRoll > 9) {
        score += 10 + (currentRoll - 10);
    } else {
        score += currentRoll;
    }
    return score;
}