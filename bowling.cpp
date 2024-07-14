int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame < 10 ? 10 : 0);
            frame++;
        } else if (c == '/') {
            score += 10 - ('X' - c);
            frame++;
        } else {
            int pins = c - '0';
            if (pins == 10) {
                score += 10;
                frame++;
            } else {
                score += pins;
                if (s[frame * 2] == 'X') {
                    score += 10;
                    frame++;
                } else if (s[frame * 2] == '/') {
                    score += 10 - ('X' - s[frame * 2]);
                    frame++;
                }
            }
        }
    }
    return score;
}