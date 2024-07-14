int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            score += min(10 - '0', 10);
            currentFrame++;
        } else {
            int pins = c - '0';
            if (currentFrame < 10 && c == 'X') {
                score += 10;
                currentFrame++;
            } else if (currentFrame < 10 && c != 'X' && c != '/') {
                score += pins;
                if (pins + min(10 - '0', 10) <= 10) {
                    currentFrame++;
                }
            } else if (c == 'X') {
                score += 10;
                currentFrame++;
            } else {
                score += pins;
            }
        }
    }
    return score;
}