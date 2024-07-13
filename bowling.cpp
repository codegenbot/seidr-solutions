int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame < 9 ? 10 : 0);
            frame++;
        } else if (c == '/') {
            score += 10 - (s[s.size() - 2] - '0');
            frame++;
        } else {
            int pins = c - '0';
            if (pins == 10) {
                score += 10;
                frame++;
            } else {
                score += pins;
                if (frame < 9 && s[s.size() - 1] != '/') {
                    frame++;
                }
            }
        }
    }
    return score;
}