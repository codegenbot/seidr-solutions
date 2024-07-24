int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - (currentFrame % 2);
            currentFrame++;
        } else {
            int pins = c - '0';
            if (pins == 10) {
                score += 10;
                currentFrame++;
            } else {
                score += pins;
                if (s[currentFrame] == '/') {
                    currentFrame++;
                }
            }
        }
    }
    return score;
}