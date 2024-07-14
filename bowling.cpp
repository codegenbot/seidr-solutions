int bowlingScore(string input) {
    int score = 0;
    bool firstRollInFrame = true;

    for (char c : input) {
        if (c == '/') {
            if (firstRollInFrame) {
                score += 10 - '0';
                firstRollInFrame = false;
            } else {
                score += 'X' - '0';
                firstRollInFrame = true;
            }
        } else if (c >= '1' && c <= '9') {
            int roll = c - '0';
            if (!firstRollInFrame) {
                score += roll;
            } else {
                score += roll;
                if (roll < 10) {
                    firstRollInFrame = false;
                }
            }
        }
    }

    return score;
}