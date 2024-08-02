int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            if (currentFrame < 10) {
                score += min(10 - (currentFrame - 1), 2);
            }
            currentFrame++;
        } else {
            int pins = c - '0';
            if (currentFrame < 10 && c == 'X') {
                score += 30;
                currentFrame++;
            } else if (currentFrame < 10 && c == '-') {
                score += 10 + score % 10;
                currentFrame++;
            } else {
                score += pins * 2;
                if (c == 'S' || c == 's') {
                    score -= score % 10;
                }
                currentFrame++;
            }
        }
    }
    return score;
}