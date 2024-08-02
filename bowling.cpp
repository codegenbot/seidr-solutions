int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - stoi(string(1, c));
            currentFrame++;
        } else {
            int pins = 10 - stoi(string(1, c));
            if (currentFrame < 10) {
                score += pins;
                currentFrame++;
            } else {
                score += pins + 10;
            }
        }
    }
    return score;
}