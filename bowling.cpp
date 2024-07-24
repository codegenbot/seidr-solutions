int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (currentRolls > 0 ? 10 : 0);
            currentRolls = 0;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - currentRolls;
            currentRolls = 0;
            currentFrame++;
        } else {
            int roll = c - '0';
            currentRolls += roll;
            if (currentRolls >= 2) {
                score += currentRolls;
                currentRolls = 0;
                currentFrame++;
            }
        }
    }

    return score;
}