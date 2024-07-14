int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10;
            frame++;
        } else {
            int pins = c - '0';
            if (frame < 9) {
                score += pins;
            } else {
                int nextPins = s[s.length() - 2] - '0';
                if (nextPins + pins > 10) {
                    score += 10 + (10 - nextPins);
                } else {
                    score += pins + nextPins;
                }
            }
        }
    }
    return score;
}