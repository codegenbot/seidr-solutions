int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - stoi(c);
            currentFrame++;
        } else {
            int pins = stoi(c);
            score += pins;
            if (currentFrame < 10) {
                if (pins < 10) {
                    score += 10 - pins;
                    currentFrame++;
                } else {
                    currentFrame++;
                }
            }
        }
    }
    return score;
}