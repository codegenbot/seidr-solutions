int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - (2 * (currentFrame < 10));
            currentFrame++;
        } else {
            int pins = c - '0';
            if (pins + c[s.find(c) + 1] - '0' == 10) {
                score += 10;
                currentFrame++;
            } else {
                score += pins + c[s.find(c) + 1] - '0';
                currentFrame++;
            }
        }
    }
    return score;
}