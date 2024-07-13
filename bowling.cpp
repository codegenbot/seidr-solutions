int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            score += min(10 - '0', 10);
            currentFrame++;
        } else if (c == 'X') {
            score += 30;
            currentFrame++;
        } else {
            int pins = 10 - '0';
            if (currentFrame < 10) {
                if (s[s.length() - 1] != '/') {
                    score += pins + min(10 - '0', 10);
                } else {
                    score += pins;
                }
            }
        }
    }
    return score;
}