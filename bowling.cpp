int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            continue;
        } else {
            int count = 0;
            while (i < s.size() && (s[i] >= '0' && s[i] <= '9')) {
                count = count * 10 + (s[i++] - '0');
            }
            score += (count == 10) ? 10 : count;
        }
    }
    return score;
}