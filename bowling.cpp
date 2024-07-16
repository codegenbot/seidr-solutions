int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += min(10, roll);
            } else {
                score += max(roll - 1, 0) + max(10 - roll, 0);
            }
            roll = 0;
        } else {
            roll++;
        }
    }
    if (roll < 2) {
        score += min(10, roll);
    } else {
        score += max(roll - 1, 0) + max(10 - roll, 0);
    }
    return score;
}