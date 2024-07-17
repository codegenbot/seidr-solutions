int bowlingScore(string str) {
    int score = 0;
    bool inFrame = false;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : str) {
        if (c == 'X') {
            score += 10 + (inFrame ? 10 : 0);
            inFrame = true;
            currentRolls++;
            if (currentRolls % 2 == 0) {
                currentFrame++;
            }
        } else if (c == '/') {
            score += 10 - currentRolls;
            inFrame = false;
            currentRolls = 0;
            if (currentFrame < 10) {
                currentFrame++;
            }
        } else {
            int roll = c - '0';
            score += roll;
            currentRolls++;
            if (currentRolls == 2 && inFrame) {
                inFrame = false;
                currentFrame++;
            }
        }
    }

    return score;
}