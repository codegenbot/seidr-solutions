int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 + (frame < 9 ? 10 - ('X' - c) : 0);
            frame++;
        } else {
            int points = c - '0';
            if (points == 10) {
                score += 10;
                frame++;
            } else {
                score += points;
                if (s[frame] != '/') {
                    score += s[frame] - '0';
                }
                frame++;
            }
        }
    }
    return score;
}