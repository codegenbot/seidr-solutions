int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;

    for (char c : s) {
        if (c == '/') {
            if (firstRollInFrame) {
                score += 10 - ('X' - '0');
                firstRollInFrame = false;
            } else {
                score += 10 + ('X' - '0') - (c - '0');
            }
        } else if (c == 'X') {
            score += 10;
            firstRollInFrame = true;
        } else {
            int roll = c - '0';
            if (!firstRollInFrame) {
                if (roll + ('X' - '0') <= 10) {
                    score += roll + ('X' - '0');
                } else {
                    score += 10;
                }
            } else {
                score += roll;
            }
            firstRollInFrame = false;
        }
    }

    return score;
}