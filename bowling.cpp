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
                if (c == '/') {
                    // spare, so add next roll's value (or 0 if none)
                    currentScore += currentRolls > 1 ? 10 : (currentScore + c - '0');
                } else {
                    currentScore += c - '0' + (currentRolls > 1);
                }
            }
        }

        if (currentRolls == 2) {
            score += currentScore;
            currentScore = 0;
            inFrame = false;
            currentRolls = 0;
        }
    }

    return score;
}