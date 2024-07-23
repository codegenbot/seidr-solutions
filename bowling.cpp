int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll < 2) {
                score += min(10, currentRoll);
                currentRoll = 0;
            }
        } else {
            currentRoll++;
        }
    }
    if (currentRoll > 1) {
        score += 10 + currentRoll - 1;
    } else if (currentRoll == 1) {
        score += min(10, currentRoll);
    }
    return score;
}