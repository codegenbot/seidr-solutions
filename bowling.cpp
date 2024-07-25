int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - ((s[s.length() - 1] - '0'));
            frame++;
        } else {
            int pins = c - '0';
            if (pins + s[s.length() - 1] - '0' >= 10) {
                score += 10;
                frame++;
            } else {
                score += pins;
                frame++;
            }
        }
    }
    return score;
}