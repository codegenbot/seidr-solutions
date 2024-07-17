int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll = 2;
        } else if (c == '/') {
            score += 10 + min(roll, 1);
            roll = 0;
        } else {
            int thisRoll = c - '0';
            score += thisRoll;
            roll--;
        }
    }
    while (roll > 0) {
        if (roll == 2) score += 20;
        else if (roll == 1) score += min(10, roll);
        roll = 0;
    }
    return score;
}