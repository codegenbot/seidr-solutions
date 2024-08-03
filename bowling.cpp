int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 + 10 - frame;
            frame++;
        } else {
            int pins = c - '0';
            score += pins;
            if (frame < 10) {
                frame++;
            }
        }
    }
    return score;
}