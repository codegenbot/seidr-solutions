int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 10;
            currentRoll = 0;
        } else {
            currentRoll++;
            if (currentRoll == 10) {
                score += 10 + 10;
                currentRoll = 0;
            }
        }
    }
    return score;
}