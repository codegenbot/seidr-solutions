int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10;
            frame++;
        } else if (isdigit(c)) {
            int pins = c - '0';
            if (frame < 9 && s[s.size() - 3] == 'X' || s[s.size() - 2] == '/') {
                score += 10 + pins;
                frame++;
            } else {
                score += pins;
                frame++;
                if (s[s.size() - 1] != c) {
                    frame++;
                }
            }
        }
    }
    return score;
}