int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            score += min(10 - '0', 10);
            currentFrame++;
        } else if (isdigit(c)) {
            score += c - '0';
            if (currentFrame < 10 && c != 'X') {
                currentFrame++;
            }
        } else {
            score += 10;
            currentFrame++;
        }
    }
    return score;
}