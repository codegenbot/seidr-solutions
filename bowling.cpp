```
int bowlingScore(std::string s) {
    int score = 0;
    int prevRoll1 = 0;
    int prevRoll2 = 0;
    bool isStrike = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            isStrike = true;
        } else if (s[i] == '/') {
            if (isStrike) {
                score += prevRoll1 * 2;
                isStrike = false;
            } else {
                int roll1 = s[i - 1] - '0';
                int roll2 = s[i + 1] - '0';
                score += (roll1 + roll2);
            }
        } else if (s[i] == ' ') {
            if (isStrike) {
                score += prevRoll1 * 2;
                isStrike = false;
            } else {
                int roll1 = s[i - 1] - '0';
                int roll2 = s[i + 1] - '0';
                score += (roll1 + roll2);
            }
        } else if (s[i] != '\0') {
            int roll = s[i] - '0';
            if (isStrike) {
                score += roll + prevRoll1 * 2;
                isStrike = false;
            } else {
                if (i < s.length() - 1 && s[i + 1] == '/') {
                    score += roll + prevRoll1;
                    prevRoll1 = roll;
                    prevRoll2 = 0;
                } else {
                    score += roll;
                    prevRoll1 = roll;
                    prevRoll2 = 0;
                }
            }
        }
    }

    return score;
}