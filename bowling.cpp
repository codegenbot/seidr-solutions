int calculateScore(string& str) {
    int score = 0;
    bool firstRollInFrame = true;
    int rollsInCurrentFrame = 0;

    for (char c : str) {
        if (c == '/') {
            firstRollInFrame = true;
            rollsInCurrentFrame = 0;
        } else if (c == 'X') {
            score += 30;
            continue;
        } else if (isdigit(c)) {
            int currentRoll = c - '0';
            if (firstRollInFrame) {
                if (currentRoll + currentRoll <= 10) {
                    score += currentRoll * 2;
                    firstRollInFrame = false;
                    rollsInCurrentFrame++;
                } else {
                    score += 10;
                    firstRollInFrame = true;
                }
            } else {
                rollsInCurrentFrame++;
                if (rollsInCurrentFrame == 2) {
                    score += currentRoll;
                }
            }
        }
    }

    return score;
}