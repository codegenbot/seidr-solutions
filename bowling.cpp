int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    bool spareOrStrike = false;

    for (char c : s) {
        if (c == '/') {
            currentRolls++;
            if (currentRolls > 1 && !spareOrStrike) {
                score += min(10 - currentRolls, 1);
            }
            currentRolls = 0;
            spareOrStrike = false;
        } else if (isdigit(c)) {
            int roll = c - '0';
            currentRolls++;
            if (currentRolls == 2) {
                score += 10;
            } else if (currentRolls > 1 && !spareOrStrike) {
                score += min(roll, 10 - currentRolls);
            }
        } else if (c == 'X') {
            score += 10;
            spareOrStrike = true;
            currentRolls++;
        } else if (c == '-') {
            continue;
        } else {
            int roll = c - '0';
            score += roll;
            currentRolls++;
        }
    }

    return score;
}