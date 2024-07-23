int bowlingScore(string &s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == '/') {
            score += min(10 - '0' + 'X', 10);
            frame++;
        } else if (c >= '0' && c <= '9') {
            score += c - '0';
            if (frame == 10) {
                return score;
            }
        } else {
            score += 10;
            if (frame < 10) {
                frame++;
            }
        }
    }
    return score;
}