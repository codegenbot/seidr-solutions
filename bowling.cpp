int bowlingScore(const char* s) {
    int score = 0;
    int currentRoll = 0;
    int rollCount = 0;

    for (const char &c : s) {
        if (c == '/') {
            score += currentRoll + (rollCount < 9 ? max(1, currentRoll) : 0);
            currentRoll = 0;
            rollCount++;
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }

    score += currentRoll;

    return score;
}