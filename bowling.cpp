int bowlingScore(string str) {
    int score = 0;
    int currentRoll = 0;
    for (char c : str) {
        if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 10;
            currentRoll = 0;
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }
    return score;
}