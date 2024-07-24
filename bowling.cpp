int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == '/') {
            score += min(10 - '0', 10);
            frame++;
        } else if (isdigit(c)) {
            int pins = c - '0';
            if (frame < 10) {
                if (frame == 9 && pins < 10) {
                    score += pins + 10;
                } else {
                    score += pins;
                }
            } else {
                score += pins;
            }
        } else {
            if (c == 'X') {
                score += 10;
                frame++;
            } else if (c == '-') {
                continue;
            } else {
                int pins = c - '0' + c - '1';
                score += pins;
                frame++;
            }
        }
    }
    return score;
}