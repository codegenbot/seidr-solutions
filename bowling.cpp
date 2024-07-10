int bowlingScore(string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    bool lastRollWasSpare = false;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            lastRollWasStrike = true;
        } else if (c == '/') {
            score += 10;
            lastRollWasSpare = true;
        } else if (isdigit(c)) {
            int thisFrameScore = c - '0';
            if (lastRollWasStrike) {
                score += thisFrameScore;
                lastRollWasStrike = false;
            } else if (lastRollWasSpare) {
                score += thisFrameScore + 10;
                lastRollWasSpare = false;
            } else {
                score += thisFrameScore;
            }
        }
    }

    return score;
}