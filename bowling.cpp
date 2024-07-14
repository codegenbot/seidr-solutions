int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll * 10);
            roll++;
        } else {
            int points = c - '0';
            if (points == 1 || points == 2 || points == 3) {
                score += 10 + points;
                roll++;
            } else {
                score += 10 + points;
                roll++;
                score += 10;
                roll++;
            }
        }
    }
    return score;
}