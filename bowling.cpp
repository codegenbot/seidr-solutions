int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - roll;
            } else {
                score += 10 + min(roll, 1);
            }
            roll = 0;
        } else if (c == 'X') {
            score += 10;
            roll = 0;
        } else if (isdigit(c)) {
            int strike = c - '0';
            if (strike > 9) {
                score += 10 + min(strike, 1);
            } else {
                score += strike;
            }
            roll++;
        }
    }
    return score;
}