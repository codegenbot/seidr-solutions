int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsLeftInFrame = 2;

    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + 10 / currentFrame;
            currentFrame++;
            rollsLeftInFrame = 2;
        } else if (c == '/') { // spare
            score += 10 + 1 - rollsLeftInFrame;
            currentFrame++;
            rollsLeftInFrame = 0;
        } else { // regular roll
            int thisRoll = c - '0';
            score += thisRoll;
            rollsLeftInFrame--;
            if (rollsLeftInFrame == 0) {
                currentFrame++;
                rollsLeftInFrame = 2;
            }
        }
    }
    return score;
}