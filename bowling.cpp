int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (roll > 0) {
                score += roll;
                roll = 0;
            }
        } else if (isdigit(s[i])) {
            int temp = 0;
            while (i < s.length() && isdigit(s[i])) {
                temp = temp * 10 + (s[i] - '0');
                i++;
            }
            roll += temp;
        }
    }
    if (roll > 0) score += roll;
    return score;
}