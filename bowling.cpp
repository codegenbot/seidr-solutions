int bowlingScore(string input) {
    int score = 0;
    int currentFrame = 1;
    for (char c : input) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 + (currentFrame < 10 ? 10 - stoi(string(1, c)) : 0);
            currentFrame++;
        } else {
            int pins = 10 - stoi(string(1, c));
            if (pins > 0) {
                score += 10;
                currentFrame++;
            }
        }
    }
    return score;
}