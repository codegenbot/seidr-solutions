int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (roll > 0 ? 10 : 0);
            roll = 0;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
            frame++;
        } else {
            int pins = c - '0';
            roll += pins;
            if (roll >= 10) {
                score += 10;
                roll = 0;
            }
        }
        if (frame == 9 && c != 'X') {
            if (c == '/') {
                score -= c - '0';
            } else {
                score += c - '0';
            }
        }
    }
    return score;
}