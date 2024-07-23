int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == '/') {
            score += 10;
        } else if (isdigit(s[i])) {
            roll1 = s[i] - '0';
            if (i < 8 && s[i+1] != '/') {
                roll2 = s[i+1] - '0';
                score += roll1 + roll2;
            } else {
                score += roll1;
            }
        } else {
            if (s[i] == 'X') {
                score += 10;
            } else {
                int temp = s[i] - '0' + s[i+1] - '0';
                score += temp;
                i++;
            }
        }
    }
    return score;
}