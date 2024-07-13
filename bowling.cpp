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
            currentRoll = currentRoll * 10 + (c - '0') * 10;
        }
    }
    return score;
}