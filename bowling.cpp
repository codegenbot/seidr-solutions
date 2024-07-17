int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 10;
            lastRoll = true;
        } else if (isdigit(s[i])) {
            int roll1, roll2;
            roll1 = s[i] - '0';
            if (i < 8 && s[i + 1] == '/') {
                roll2 = 10 - roll1;
                i++;
            } else if (s[i + 1] == 'X') {
                roll2 = 10;
                lastRoll = true;
                i++;
            } else {
                roll2 = s[i + 1] - '0';
                i++;
            }
            score += roll1 + roll2;
        }
    }

    return score;
}