int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool lastRoll = false;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            int value = s[i] - '0';
            if (lastRoll) {
                if (roll == 10) {
                    score += 10 + value;
                } else {
                    score += 10;
                }
                lastRoll = false;
                roll = 0;
            } else {
                roll += value;
                if (i < s.length() - 1 && s[i+1] == '/') {
                    i++;
                    lastRoll = true;
                }
            }
        } else if (s[i] == 'X') {
            score += 10;
            lastRoll = false;
            roll = 0;
        }
    }

    return score;
}