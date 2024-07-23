int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame < 10 ? 10 : 0);
            frame++;
        } else if (c == '/') {
            int strike = 10 - ((s[s.size() - 2] - '0') + (s[s.size() - 1] - '0'));
            score += 10 + strike;
            frame++;
        } else {
            int pins = c - '0';
            if (frame < 9) {
                if (pins == 10) {
                    score += 10 + 10;
                    frame += 2;
                } else {
                    score += pins + (s[s.size() - 1] - '0' + s[s.size() - 2] - '0');
                    frame++;
                }
            } else {
                if (pins == 10) {
                    score += 10;
                    frame++;
                } else {
                    score += pins;
                    frame++;
                }
            }
        }
    }
    return score;
}