int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    bool strike = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 10;
            strike = true;
        } else if (isdigit(s[i])) {
            if (strike) {
                roll1 = roll2 = s[i] - '0';
                strike = false;
            } else {
                roll1 = s[i] - '0';
            }
        } else {
            if (strike) {
                roll2 = s[i] - '0';
                score += 10 + roll1 + roll2;
                strike = false;
            } else {
                roll2 = s[i] - '0';
                if (roll1 + roll2 == 10) {
                    score += 10 + roll1;
                } else {
                    score += roll1 + roll2;
                }
            }
        }
    }

    return score;
}