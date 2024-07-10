int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll - 1);
            roll = 0;
        } else {
            int temp = c - '0';
            score += temp;
            roll++;
            if (roll == 2) {
                if (score + temp < 10) {
                    score += temp * 2;
                } else {
                    score += temp;
                }
                roll = 0;
            }
        }
    }
    return score;
}