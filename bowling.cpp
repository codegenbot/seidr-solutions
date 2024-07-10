int bowlingScore(const string& input) {
    int score = 0;
    bool firstRollInFrame = true;

    for (char c : input) {
        if (c == 'X') { // strike
            score += 10 + getBonusForNextTwo Rolls();
        } else if (c == '/') { // spare
            score += 10 + getBonusForNextRoll();
        } else { // normal roll
            int currentFrameScore = c - '0';
            if (!firstRollInFrame) {
                currentFrameScore += getBonusForCurrentFrame();
            }
            score += currentFrameScore;
            firstRollInFrame = false;
        }
    }

    return score;
}

int getBonusForNextTwoRolls() {
    // implement this function
}

int getBonusForNextRoll() {
    // implement this function
}

int getBonusForCurrentFrame() {
    // implement this function
}