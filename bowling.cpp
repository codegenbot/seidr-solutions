int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls == 2) {
                score += 10 + currentFrame;
                currentFrame++;
                currentRolls = 0;
            } else {
                score += 10;
                currentRolls = 0;
            }
        } else if (isdigit(c)) {
            int val = c - '0';
            if (currentRolls == 1) {
                if (val + 1 == 10) {
                    score += 10;
                    currentFrame++;
                    currentRolls = 0;
                } else {
                    score += val;
                    currentRolls = 2;
                }
            } else {
                score += val;
                currentRolls = 1;
            }
        }
    }

    if (currentRolls == 2) {
        score += 10 * currentFrame;
    } else if (currentRolls == 1) {
        score += 10 + currentFrame;
    }

    return score;
}