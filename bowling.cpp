int bowlingScore(const string& input) {
    int score = 0;
    int currentRoll = 0;
    for (char c : input) {
        if (c == '/') {
            score += max(currentRoll, 10 - currentRoll);
            currentRoll = 0;
        } else if (isdigit(c)) {
            currentRoll *= 10 + (c - '0');
        }
    }
    if (currentRoll > 0) score += currentRoll;
    return score;
}