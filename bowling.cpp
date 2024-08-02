int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == '/') {
            score += min(10 - '0', 10);
            frame++;
        } else if (c == 'X') {
            score += 10;
            frame++;
        } else {
            int points = c - '0';
            if (frame < 9) {
                if (points == 1 || points == 2) {
                    score += points;
                    frame++;
                } else {
                    score += 10 + points;
                    frame++;
                }
            } else {
                score += 10 + points;
            }
        }
    }
    return score;
}