int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll < 2) {
                score += 10 - currentRoll;
            }
            currentRoll = 0;
        } else if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else {
            currentRoll++;
            score += c - '0';
        }
    }
    return score;
}