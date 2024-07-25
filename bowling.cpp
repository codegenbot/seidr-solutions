int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRolls = 2;
        } else if (c == '/') {
            score += 10 + getRemainingRolls(s, s.find(c));
            currentRolls = 0;
        } else {
            int roll = c - '0';
            score += roll;
            currentRolls--;
            if (currentRolls > 0) {
                getRemainingRolls(s, s.find(c));
            }
        }
    }
    return score;
}

int getRemainingRolls(string s, int index) {
    int rolls = 0;
    while (index < s.size() && currentRolls > 0) {
        if (s[index] == 'X') {
            rolls += 30;
            break;
        } else if (s[index] == '/') {
            rolls += 10 + getRemainingRolls(s, index + 1);
            break;
        }
        int roll = s[index] - '0';
        rolls += roll;
        currentRolls--;
        index++;
    }
    return rolls;
}