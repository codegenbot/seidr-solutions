int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int totalInFrame = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            totalInFrame = 10;
        } else if (c == '/') {
            score += 10 + totalInFrame;
            currentFrame++;
            totalInFrame = 0;
        } else {
            int pins = c - '0';
            totalInFrame += pins;

            if (totalInFrame >= 10) {
                score += (currentFrame == 10 ? 10 : 20);
                currentFrame++;
                totalInFrame = 0;
            }
        }
    }

    return score;
}