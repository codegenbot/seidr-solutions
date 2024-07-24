int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + ((frame < 9) ? 10 : 0);
            frame++;
        } else if (c == '/') {
            score += 10 - (int)s.find(c, s.find(c) + 1);
            frame++;
        } else {
            int pins = c - '0';
            if (pins + (s[s.size() - 1] - '0') >= 10) {
                score += 10;
                frame++;
            } else {
                score += pins;
                if (frame < 9) {
                    frame++;
                }
            }
        }
    }
    return score;
}