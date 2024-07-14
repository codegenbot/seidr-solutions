int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll > 9) {
                score += 10 + currentRoll;
                currentRoll = 0;
            } else {
                score += 10;
            }
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        } else {
            score += currentRoll;
            currentRoll = 0;
        }
    }
    if (currentRoll > 0) {
        score += currentRoll;
    }
    return score;
}