int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 + 10 - (frame < 10 ? 2 : 0);
            frame++;
        } else {
            int points = c - '0';
            if (points == 1) {
                score += 10;
                frame++;
            } else {
                score += 10 + points;
                frame++;
            }
        }
    }
    return score;
}