int bowlingScore(string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    bool lastRollWasSpare = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (lastRollWasStrike ? 10 : 0);
            lastRollWasStrike = true;
            continue;
        }

        if (s[i] == '/') {
            int nextChar = s[i+1] - '0';
            score += 10 - nextChar;
            i++;
            lastRollWasSpare = true;
            continue;
        }

        if (isdigit(s[i])) {
            int roll = s[i] - '0' + (s[i+1] == 'X' ? 10 : s[i+1] - '0');
            score += roll;

            if (!lastRollWasStrike && !lastRollWasSpare) {
                lastRollWasStrike = false;
                lastRollWasSpare = false;
            }
        }
    }

    return score;
}