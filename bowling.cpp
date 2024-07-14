int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int left = s[i-1] - '0';
            int right = s[i+1] - '0';
            score += left * 10 + right;
        } else {
            int temp = 0;
            for (int j = i; j < 10 && (s[j] == s[i]); ++j) {
                temp++;
            }
            if (temp == 2) {
                score += (s[i] - '0') * 20;
            } else {
                score += (s[i] - '0') * 10 + temp - 1;
            }
        }
    }
    return score;
}