int bowlingScore(string bowls) {
    int score = 0;
    int currentRoll = 0;
    for (char c : bowls) {
        if (c == 'X') {
            score += 10 + (currentRoll > 0 ? 10 : 0);
            currentRoll = 0;
        } else if (c == '/') {
            score += 10 - currentRoll;
            currentRoll = 0;
        } else {
            currentRoll += c - '0';
        }
    }
    return score;
}