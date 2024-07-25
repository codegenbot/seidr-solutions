int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, roll3;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            if (s[i+1] == '/') {
                score += (roll1 = s[i] - '0');
                score += (roll2 = s[i+1] - '0');
                i++;
            } else {
                roll1 = s[i] - '0';
                if (i < 8) {
                    roll2 = s[i+1] - '0';
                    roll3 = s[i+2] - '0';
                }
            }
        }
        if (roll1 + roll2 >= 10) {
            score += 10 + (roll1 + roll2);
        } else {
            score += roll1 + roll2;
            if (i < 8 && roll3 > 0) {
                if (s[i+2] == 'X') {
                    score += 10 + roll3;
                } else {
                    score += roll3;
                }
            }
        }
    }
    return score;
}