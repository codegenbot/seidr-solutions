int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool spare = false;
    for (char c : s) {
        if (c == '/') {
            if (spare) {
                score += 10 + max(roll, 1);
                spare = false;
            }
            else {
                score += 10 - roll;
                roll = 0;
            }
        }
        else if (c == 'X') {
            score += 30;
            roll = 0;
            spare = false;
        }
        else {
            int pin = c - '0';
            roll++;
            if (roll < 2) {
                if (spare && roll > 1) {
                    score += 10 + min(roll, 1);
                    spare = false;
                }
            }
            else if (roll == 2) {
                score += pin * 2;
                roll = 0;
                spare = (pin == 10);
            }
        }
    }
    return score;
}