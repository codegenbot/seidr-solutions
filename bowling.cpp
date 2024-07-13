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
            currentRoll *= 10 + (c - '0');
        } else { // X
            score += 10;
            currentRoll = 0;
        }
    }
    return score;
}