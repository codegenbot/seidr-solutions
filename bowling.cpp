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
            currentRolls++;
            if (currentRolls == 2) {
                score += (c - '0') * 2;
                currentRolls = 0;
                currentFrame++;
            }
        }
    }

    return score;
}