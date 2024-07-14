int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - (currentFrame < 10 ? stoi(string(1, c)) : 0);
            currentFrame++;
        } else {
            int pins = stoi(string(1, c));
            if (pins == 10) {
                score += 10;
                currentFrame++;
            } else {
                score += pins;
                if (currentFrame < 10) {
                    currentFrame++;
                }
            }
        }
    }
    return score;
}