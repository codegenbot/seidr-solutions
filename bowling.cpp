int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    bool spareOrStrike = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + nextTwo Rolls();
            currentRolls = 0;
            spareOrStrike = true;
        } else if (c == '/') {
            score += 10 - currentRolls;
            currentRolls = 0;
            spareOrStrike = false;
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (!spareOrStrike) {
                currentRolls++;
                score += roll;
            } else {
                if (currentRolls == 1) {
                    score += roll + nextRoll();
                } else {
                    score += roll + roll;
                }
            }
        }
    }

    return score;
}

int nextTwoRolls() {
    return 10 - currentRolls;
}

int nextRoll() {
    // assuming the rest of the frame is always a strike
    return 10;
}