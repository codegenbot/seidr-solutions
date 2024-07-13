int bowlingScore(const string& input) {
    int score = 0;
    bool isNextStrike = false;
    bool isLastRollInFrame = true;

    for (char c : input) {
        if (c == 'X') {
            score += 30;
            isNextStrike = true;
        } else if (c == '/') {
            if (!isNextStrike)
                score += 10;
            isNextStrike = false;
            isLastRollInFrame = true;
        } else {
            int currentRoll = c - '0';
            if (!isNextStrike) {
                score += currentRoll;
                if (currentRoll == 10) {
                    isLastRollInFrame = false;
                }
            } else {
                score += currentRoll * 2;
                isNextStrike = false;
            }
        }
    }

    return score;
}