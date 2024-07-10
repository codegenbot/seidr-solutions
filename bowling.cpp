int bowlingScore(string str) {
    int score = 0;
    int roll = 0;
    for (char c : str) {
        if (c == '/') {
            if (roll < 10) {
                score += min(10, roll);
                roll = 0;
            }
        } else if (c == 'X') {
            score += 30;
            roll = 0;
        } else {
            roll++;
        }
    }
    if (roll > 0) score += min(10, roll);
    return score;
}