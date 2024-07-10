int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool newRoll = true;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (newRoll ? 0 : 10);
            newRoll = false;
        } else if (isdigit(s[i])) {
            int pins = s[i] - '0';
            roll++;
            if (roll < 2) {
                score += pins;
            } else {
                if (s[i+1] == '/') {
                    score += (10 - (10 - pins));
                    i++; // skip '/'
                    newRoll = true;
                }
                else {
                    score += pins * 2;
                }
            }
        } else if (s[i] == '/') {
            score += roll * 10;
            newRoll = true;
            roll = 0;
        }
    }

    return score;
}