int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, lastRoll;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (i < 9 ? 10 : 0);
            continue;
        }
        if (s[i] == '/') {
            lastRoll = 10 - (10 - (s[i + 1] - '0') * 10 - (s[i + 2] - '0'));
            i += 2;
        } else {
            roll1 = s[i] - '0';
            if (i < s.length() - 1 && s[i + 1] == '/') {
                lastRoll = 10 - roll1;
                break;
            }
            roll2 = s[++i] - '0';
            lastRoll = roll1 + roll2;
        }

        if (lastRoll > 0) {
            score += lastRoll;
        }
    }
    return score;
}