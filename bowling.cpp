int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // strike
            score += 10 + (i < 9 ? 10 : 0);
        } else if (s[i] == '/') { // spare
            int j = i + 1;
            while (j < 11 && s[j] != ' ') {
                j++;
            }
            score += 10 - (s[i + 1] - '0') - (s[i + 2] - '0');
        } else { // non-strike, non-spare
            int j = i;
            while (j < 11 && s[j] != ' ') {
                j++;
            }
            score += (s[i] - '0') + (s[i + 1] - '0');
        }
    }
    return score;
}