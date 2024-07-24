int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (currentRoll > 0 ? currentRoll : 10);
            currentRoll = 0;
        } else if (c == '/') {
            score += 10 - currentRoll;
            currentRoll = 0;
        } else {
            currentRoll++;
        }
    }
    return score;
}