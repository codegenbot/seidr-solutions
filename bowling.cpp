int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - roll);
            }
            roll = 0;
        } else if (c == 'X') {
            score += 10;
            roll = 0;
        } else if (isdigit(c)) {
            int points = c - '0';
            roll++;
            if (roll < 2) {
                score += points;
            } else {
                score += points * 2;
            }
        }
    }
    return score;
}