Here is the solution:

int bowling(string s) {
    int score = 0;
    int roll = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '/') {
            if (isdigit(s[i])) {
                roll *= 10;
                roll += s[i] - '0';
            } else {
                score += roll;
                roll = 0;
            }
        } else {
            score += roll;
            roll = 0;
        }
    }
    score += roll;
    return score;
}