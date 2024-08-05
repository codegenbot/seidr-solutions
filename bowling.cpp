int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame < 9 ? 10 : 0);
            frame++;
        } else if (c == '/') {
            score += 10 - (s[frame+1] - '0' + s[frame+2] - '0');
            frame++;
        } else {
            int pins = c - '0';
            if (frame < 9) {
                if (pins < 3) {
                    score += pins;
                    frame++;
                } else {
                    score += pins + 10;
                    frame++;
                }
            } else {
                score += pins;
            }
        }
    }
    return score;
}