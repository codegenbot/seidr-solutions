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
            score += 30;
            roll = 0;
        } else {
            int temp = c - '0';
            if (roll > 0) {
                temp += roll;
                if (temp < 10) {
                    score += temp;
                } else {
                    score += 10 + (temp - 10);
                }
            } else {
                score += temp;
            }
            roll++;
        }
    }
    return score;
}