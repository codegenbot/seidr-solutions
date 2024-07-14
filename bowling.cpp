int bowlingScore(string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            lastRollWasStrike = true;
        } else if (c == '/') {
            score += 10 - (lastRollWasStrike ? 20 : 0);
            lastRollWasStrike = false;
        } else {
            int currentFrameScore = c - '0';
            if (!lastRollWasStrike) {
                score += currentFrameScore;
            }
            if (c == '5' || c == '7') {
                lastRollWasStrike = true;
            }
        }
    }
    return score;
}