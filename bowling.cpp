int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            score += firstRoll + secondRoll;
        } else {
            int roll = s[i] - '0';
            if (i < 8) {
                if (s[i+1] == '/') {
                    score += roll * 2;
                } else {
                    score += roll;
                }
            } else {
                score += roll;
            }
        }
    }
    return score;
}