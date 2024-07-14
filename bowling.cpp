int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 + (frame < 9 ? 10 - ('0' - c) : 10);
            frame++;
        } else {
            int pins = '0' - c;
            score += pins;
            if (pins < 10) {
                frame++;
            }
        }
    }
    return score;
}