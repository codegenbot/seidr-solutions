int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool lastRollInFrame = false;

    for (char c : s) {
        if (c == '/') {
            if (lastRollInFrame) {
                score += roll * 2;
                roll = 0;
                lastRollInFrame = false;
            }
        } else if (c >= '0' && c <= '9') {
            int thisRoll = c - '0';
            if (!lastRollInFrame) {
                roll = thisRoll;
            } else {
                roll += thisRoll;
            }
        } else {
            score += roll;
            roll = 0;
            lastRollInFrame = true;
        }
    }

    if (roll > 0) {
        score += roll;
    }

    return score;
}