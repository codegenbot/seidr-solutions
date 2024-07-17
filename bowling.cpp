int bowlingScore(string frames) {
    int score = 0;
    int currentRoll = 0;
    for (char c : frames) {
        if (c == 'X') {
            score += 10 + currentRoll;
            currentRoll = 0;
        } else if (c == '/') {
            score += 10 - currentRoll;
            currentRoll = 0;
        } else {
            currentRoll = currentRoll * 10 + (c - '0');
        }
    }
    return score;
}