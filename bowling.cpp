int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;

    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            score += 10 - (i + 1);
            lastRoll = true;
        } else if (isdigit(s[i])) {
            int roll = s[i] - '0';
            if (lastRoll) return -1;
            if (s[i+1] != '/') {
                roll *= 2;
                i++;
            }
            score += roll;
        } else if (s[i] == 'X') {
            score += 10;
            lastRoll = true;
        }
    }

    return score;
}