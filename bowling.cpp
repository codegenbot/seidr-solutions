int bowlingScore(std::string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll > 0) {
                if (currentRoll < 10) {
                    score += 1 + currentRoll;
                } else {
                    score += 10;
                }
                currentRoll = 0;
            }
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }
    if (currentRoll > 0) score += currentRoll;
    return score;
}