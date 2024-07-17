int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == '/') continue;
        if (isdigit(s[i])) {
            int count = 1;
            while (i + 1 < 10 && isdigit(s[i+1])) {
                ++count;
                ++i;
            }
            score += count * 10;
        } else if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '-') {
            score += 0;
        } else {
            int count = s[i] - '0';
            score += count;
        }
    }
    return score;
}