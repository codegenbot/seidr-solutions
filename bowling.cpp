int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll - 1) * 10;
            roll++;
        } else {
            int frame = c - '0';
            score += frame;
            roll++;
            if (frame < 2) {
                if (s[3] != '/' && s[4] != '/') {
                    int nextRoll = s[3] - '0' + 10 * (s[4] - '0');
                    score += nextRoll > 10 ? 20 : nextRoll;
                }
            }
        }
    }
    return score;
}