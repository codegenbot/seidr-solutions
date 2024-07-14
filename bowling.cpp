int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                score += 10 - (10 - currentRolls);
            }
            currentRolls = 0;
            currentFrame++;
        } else if (isdigit(c)) {
            int roll = c - '0';
            currentRolls++;

            if (currentRolls == 1) {
                score += roll;
            } else if (currentRolls == 2) {
                if (roll + 10 > 10) {
                    score += 10;
                } else {
                    score += roll + 10;
                }
            }
        }
    }

    return score;
}