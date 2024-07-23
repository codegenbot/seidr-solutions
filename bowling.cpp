int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int pins = s[i] - '0';
            if (i < 8 && (s[i+1] == '/' || s[i+1] == 'X')) {
                score += 10 + pins;
                i++;
            } else {
                score += pins;
            }
        } else if (s[i] == '/') {
            int j = i + 1;
            while (j < 11 && !isdigit(s[j])) {
                j++;
            }
            int pins = s[j] - '0';
            score += 10 - pins;
        }
    }
    return score;
}