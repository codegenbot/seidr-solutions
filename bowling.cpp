int calculateScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrameScore = 0;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                score += 10 - currentFrameScore;
            }
            currentRolls = 0;
            currentFrameScore = 0;
        } else if (c >= '0' && c <= '9') {
            int roll = c - '0';
            if (currentRolls == 1) {
                if (roll + currentFrameScore > 10) {
                    score += 10;
                } else {
                    score += roll + currentFrameScore;
                }
            } else {
                currentFrameScore += roll;
            }
            currentRolls++;
        }
    }

    return score;
}