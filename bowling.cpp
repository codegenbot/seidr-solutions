int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - (2 * ('X' - '0'));
            currentFrame++;
        } else {
            int strike = c - '0';
            score += strike;
            if (currentFrame < 10) {
                if (s[s.size() - 1] == 'X') {
                    score += 30;
                } else if (s[s.size() - 1] == '/') {
                    score += 10 - (2 * ('X' - '0'));
                }
            }
        }
    }
    return score;
}