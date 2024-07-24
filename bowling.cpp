int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + roll;
            roll = 0;
        } else {
            int temp = c - '0';
            if (roll < 2) {
                score += temp;
                roll++;
            } else {
                score += temp;
                if (temp == 1 || temp == 2 || temp == 3) {
                    score += 10 + roll;
                    roll = 0;
                }
            }
        }
    }
    return score;
}