int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 10) {
                score += min(10 - roll, 10);
            } else {
                score += min(10 - roll, 20);
            }
            roll = 0;
        } else if (c == 'X') {
            score += 30;
            roll = 0;
        } else if (c >= '0' && c <= '9') {
            int count = c - '0';
            while (count--) {
                if (roll < 10) {
                    if (roll + 1 == 10) {
                        score += min(10, roll + 1);
                        roll = 0;
                    } else {
                        score += min(10 - roll, 1);
                    }
                } else {
                    score += min(20 - roll, 2);
                }
                roll++;
            }
        }
    }
    if (roll < 10) {
        score += min(10 - roll, 10);
    } else {
        score += min(10 - roll, 20);
    }
    return score;
}