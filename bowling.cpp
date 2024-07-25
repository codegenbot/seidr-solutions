int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            roll1 = s[i] - '0';
            if (i < 8) {
                if (s[i+1] == '/') {
                    roll2 = 10 - roll1;
                    score += roll1 + roll2;
                    i++;
                } else {
                    roll2 = s[i+1] - '0';
                    score += roll1 + roll2;
                    i++;
                }
            } else {
                score += roll1;
            }
        } else {
            if (s[i] == '/') {
                int firstRoll = s[i-1] - '0';
                int secondRoll = 10 - firstRoll;
                score += firstRoll + secondRoll;
            } else {
                int roll = s[i] - '0';
                score += roll;
            }
        }
    }
    return score;
}