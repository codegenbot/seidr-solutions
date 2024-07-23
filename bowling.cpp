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
            int points = '0' - c;
            if (points == 1 || points == 2) {
                score += 10 + points;
                frame++;
            } else {
                score += 10 + points;
                points--;
                if (frame < 9) {
                    score += 10 + points;
                    frame++;
                }
            }
        }
    }
    return score;
}