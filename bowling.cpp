int bowlingScore(const string &s) {
    int score = 0;
    int currentRoll = 0;
    bool spare = false;

    for (char c : s) {
        if (c == '/') {
            spare = true;
        } else if (c >= '1' && c <= '9') {
            currentRoll = currentRoll * 10 + (c - '0');
            if (!spare) score += currentRoll;
            currentRoll = 0;
            spare = false;
        }
    }

    return score;
}