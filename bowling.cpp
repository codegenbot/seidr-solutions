int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 + (frame - 1);
            frame++;
        } else {
            int pins = c - '0';
            if (pins < 10) {
                score += pins;
                frame++;
            } else {
                score += 10;
                frame++;
                if (s.length() > s.find('/') + 2 && s[s.length() - 1] == '/') {
                    score -= 2 * (10 - pins);
                }
            }
        }
    }
    return score;
}