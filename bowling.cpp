int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, lastRoll = 0;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // strike
            score += 10 + lastRoll;
            lastRoll = 0;
        } else if (s[i+1] == '/') { // spare
            roll1 = s[i] - '0';
            roll2 = s[i+2] - '0';
            score += 10 + roll1 + roll2;
            i++;
        } else {
            roll1 = s[i] - '0';
            if (s[i+1] == 'X' || i == 8) { // last two frames
                roll2 = 10 - roll1;
            } else {
                roll2 = s[i+1] - '0';
            }
            score += roll1 + roll2;
        }
    }

    return score;
}