int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls == 2) {
                score += calculateFrame(currentFrame);
                currentFrame++;
            }
            currentRolls = 0;
        } else if (c == 'X') {
            score += 10 + calculateFrame(currentFrame);
            currentFrame++;
            currentRolls = 0;
        } else {
            int roll = c - '0';
            if (currentRolls == 1) {
                if (roll == 10) {
                    score += 10 + calculateFrame(currentFrame);
                    currentFrame++;
                    currentRolls = 0;
                } else {
                    score += roll + calculateFrame(currentFrame);
                    currentFrame++;
                    currentRolls = 0;
                }
            } else {
                score += roll;
                currentRolls++;
            }
        }
    }

    if (currentRolls == 1) {
        score += calculateFrame(currentFrame);
    } else if (currentRolls == 2) {
        score += calculateFrame(currentFrame) + calculateFrame(currentFrame);
    }

    return score;
}

int calculateFrame(int frame) {
    if (frame == 10) {
        return 30;
    }
    if (frame > 10) {
        return 20;
    }
    return 10;
}