int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsInCurrentFrame = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (currentFrame < 10 ? 10 : 0);
            currentFrame++;
            rollsInCurrentFrame = 0;
        } else if (c == '/') {
            score += 10 - rollsInCurrentFrame;
            currentFrame++;
            rollsInCurrentFrame = 0;
        } else {
            int pins = c - '0';
            score += pins;
            rollsInCurrentFrame++;

            if (rollsInCurrentFrame == 2) {
                currentFrame++;
            }
        }
    }

    return score;
}