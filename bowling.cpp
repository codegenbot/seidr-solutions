int bowlingScore(string s) {
    int score = 0;
    bool bonusRoll = false;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            if (bonusRoll) {
                score += 10 + (10 - (s[i+1]-'0'));
            }
            bonusRoll = true;
        } else {
            int roll = 10 - (s[i]-'0');
            if (bonusRoll) {
                score += roll;
            } else {
                score += roll;
                if (i < s.length()-2 && s[i+1] == '/' && s[i+2] == 'X') {
                    bonusRoll = true;
                }
            }
        }
    }

    return score;
}