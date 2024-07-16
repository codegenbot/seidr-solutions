int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - roll;
            } else {
                score += 10;
            }
            roll = 0;
        } else if (c == 'X') {
            score += 10;
            roll = 0;
        } else {
            int temp = c - '0';
            if (roll == 1) {
                if (temp + roll >= 10) {
                    score += 10;
                } else {
                    score += temp + roll;
                }
            } else {
                roll = temp;
            }
        }
    }
    return score;
}