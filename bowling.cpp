int bowlingScore(string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    bool lastRollWasSpare = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            lastRollWasStrike = true;
            continue;
        } else if (c == '/') {
            score += 10 - (lastRollWasStrike ? 0 : 5);
            lastRollWasSpare = true;
            continue;
        }

        int currentFrameScore = c - '0';
        if (!lastRollWasStrike && !lastRollWasSpare) {
            score += currentFrameScore;
        } else if (lastRollWasStrike) {
            if (currentFrameScore == 10) {
                score += 10 + 10;
            } else {
                score += 10 + currentFrameScore;
            }
        } else { // lastRollWasSpare
            score += 10 + currentFrameScore - 5;
        }

        lastRollWasStrike = false;
        lastRollWasSpare = false;
    }

    return score;
}