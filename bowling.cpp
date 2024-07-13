int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll < 2) {
                score += 10 - currentRoll;
            } else {
                score += 10 + min(currentRoll, 2);
            }
            currentRoll = 0;
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }
    return score;
}