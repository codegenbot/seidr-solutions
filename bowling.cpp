int bowlingScore(string str) {
    int score = 0;
    int roll = 0;
    bool lastRoll = false;

    for (char c : str) {
        if (c == '/') {
            if (roll > 0) {
                score += roll;
            }
            roll = 0;
            lastRoll = true;
        } else {
            roll++;
        }
    }

    if (roll > 0) {
        score += roll;
    }

    return score;
}