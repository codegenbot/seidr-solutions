int bowlingScore(string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (lastRollWasStrike ? 10 : 20);
            lastRollWasStrike = true;
        } else if (isdigit(s[i])) {
            int roll = s[i] - '0';
            if (s[i+1] == '/') {
                score += roll + 5;
                i++;
            } else {
                score += roll * 2;
            }
            lastRollWasStrike = false;
        }
    }
    return score;
}