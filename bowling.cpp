int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool spare = false;

    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - roll;
            }
            roll = 0;
            spare = true;
        } else if (c == 'X') {
            score += 10;
            roll = 0;
            spare = false;
        } else {
            int val = c - '0';
            roll += val;
            if (roll >= 2) {
                score += roll;
                roll = 0;
                spare = false;
            }
        }
    }

    return score;
}