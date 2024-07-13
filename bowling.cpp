int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;
    for (char c : s) {
        if (c == '/') {
            if (firstRollInFrame) {
                score += 10 - (c - '0');
                firstRollInFrame = false;
            } else {
                score += 10;
                firstRollInFrame = true;
            }
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (firstRollInFrame) {
                score += roll;
                firstRollInFrame = false;
            } else {
                if (roll == 10) {
                    score += roll;
                    firstRollInFrame = true;
                } else {
                    score += roll;
                    int nextRoll = s[s.length() - 1] - '0';
                    if (nextRoll + roll > 10) {
                        score += 10;
                    } else {
                        score += roll + nextRoll;
                    }
                    break;
                }
            }
        }
    }
    return score;
}