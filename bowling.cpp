int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;

    for (char c : s) {
        if (c == '/') {
            if (firstRollInFrame) {
                score += 10 - ('X' - '0');
                firstRollInFrame = false;
            } else {
                score += 10;
            }
        } else if (c == 'X') {
            score += 10;
            firstRollInFrame = true;
        } else {
            int roll = c - '0';
            if (firstRollInFrame) {
                score += roll;
                firstRollInFrame = false;
            } else {
                score += roll + (roll < 10 ? 10 : roll);
            }
        }
    }

    return score;
}