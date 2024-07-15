```
int bowlingScore(std::string s) {
    int score = 0;
    bool inFrame = false;
    int currentRolls = 0;
    int currentScore = 0;

    for (char c : s) {
        if (c == '/') {
            inFrame = true;
            currentRolls++;
        } else {
            if (!inFrame) {
                currentScore += c - '0';
            } else {
                currentScore += c - '0' + (currentRolls > 1);
            }
        }

        if (currentRolls == 2) {
            score += currentScore;
            currentScore = 0;
            inFrame = false;
            currentRolls = 0;
        }
    }

    // Add this to close the for loop
    if (inFrame || currentRolls > 0) {
        if (currentRolls == 1) {
            score += 10 + currentScore;
        } else {
            score += 10 + currentScore;
        }
    }

    return score;
}