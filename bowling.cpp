int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 0;
    for (char c : s) {
        if (c == '/') {
            currentFrame++;
            if (currentFrame > 9) return -1; // invalid input
        } else if (isdigit(c)) {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                for (int i = 1; i <= 2; i++) {
                    if (s.length() > currentFrame * 2 + i && s[currentFrame * 2 + i] == '/') break;
                    if (s.length() > currentFrame * 2 + i) score += (s[currentFrame * 2 + i] - '0');
                }
            }
        }
    }
    return score;
}