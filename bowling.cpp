int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsInFrame = 0;

    for (char c : s) {
        if (c == '/') {
            currentFrame++;
            rollsInFrame = 0;
        } else if (c >= '0' && c <= '9') {
            rollsInFrame++;
            if (currentFrame < 10) {
                score += (c - '0');
            }
            if (rollsInFrame > 1) {
                score += (c - '0') * 2;
            } else if (currentFrame == 10) {
                score += (c - '0') * 2;
            }
        }
    }

    return score;
}