int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            score += min(10 - '0', 10);
            currentFrame++;
        } else if (c >= '0' && c <= '9') {
            score += c - '0';
        }
    }
    return score;
}