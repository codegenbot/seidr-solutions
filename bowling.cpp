int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool spare = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (roll > 0 ? 10 : 0);
            roll = 0;
            spare = false;
        } else if (c == '/') {
            score += 10 - roll;
            roll = 0;
            spare = true;
        } else if (isdigit(c)) {
            int pins = c - '0';
            if (!spare) {
                score += pins;
                roll++;
            } else {
                score += pins;
                if (roll == 2) {
                    spare = false;
                }
            }
        }
    }

    return score;
}