int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
            firstRollInFrame = false;
        } else if (s[i] == '/') {
            int rollsLeftInFrame = s[i+1] - '0';
            if (firstRollInFrame) {
                int currentRollScore = 10 - (5 - rollsLeftInFrame);
                score += currentRollScore;
                firstRollInFrame = false;
            } else {
                score += rollsLeftInFrame * 10 / (rollsLeftInFrame + 1);
                i++;
            }
        } else {
            int scoreForThisRoll = s[i] - '0';
            if (firstRollInFrame) {
                int currentScore = scoreForThisRoll;
                firstRollInFrame = false;
            } else {
                score += currentScore;
            }
            if (!firstRollInFrame) {
                if (s[i+1] == '/') {
                    i++;
                } else {
                    score += scoreForThisRoll;
                }
            }
        }
    }
    return score;
}