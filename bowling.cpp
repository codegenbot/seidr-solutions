int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (roll > 0 ? min(roll, 10 - roll) * 10 : 0);
            roll = 0;
        } else if (c == '/') {
            int prevRoll = roll;
            roll = 10 - (int)(s.substr(s.find('/') + 1) - '0');
            score += prevRoll;
        } else {
            roll += (int)(c - '0');
        }
    }
    if (roll > 0) {
        score += roll;
    }
    return score;
}