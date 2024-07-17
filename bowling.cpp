int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (lastRoll ? 10 : 0);
            lastRoll = true;
        } else if (isdigit(s[i])) {
            int roll = 0;
            for (; isdigit(s[i]); i++) {
                roll = roll * 2 + (s[i] - '0');
            }
            score += roll;

            if (!lastRoll) {
                if (roll == 10) {
                    lastRoll = true;
                } else {
                    i--;
                }
            }
        } else {
            if (s[i] == '/') {
                int firstPart = 0;
                for (; isdigit(s[i]); i++) {
                    firstPart = firstPart * 2 + (s[i] - '0');
                }
                score += firstPart;

                int secondPart = 10 - firstPart;
                if (secondPart > 0) {
                    lastRoll = true;
                } else {
                    i--;
                }
            }
        }
    }

    return score;
}