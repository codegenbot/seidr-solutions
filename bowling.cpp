int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 + (frame < 10 ? 10 - (s.find('/') - s.find('X')) : 0);
            frame++;
        } else {
            int pins = c - '0';
            score += pins;
            if (pins == 10) {
                frame++;
            }
        }
    }
    return score;
}