int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            score += 10 - ((s[i + 1] - '0') + (s[i + 2] - '0'));
            i += 2;
        } else {
            int roll = 0;
            for (; i < s.length() && s[i] >= '0' && s[i] <= '9'; i++) {
                roll = roll * 10 + (s[i] - '0');
            }
            score += roll;
        }
    }
    return score;
}