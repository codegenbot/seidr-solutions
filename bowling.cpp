int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll > 1 ? 10 : 0);
            roll++;
        } else {
            int count = 0;
            while (c != '/' && c != 'X') {
                count *= 10;
                count += c - '0';
                c = s[s.find(c) + 1];
            }
            if (count == 10) {
                score += 10;
                roll++;
            } else {
                score += count;
                roll++;
                if (roll < 10) {
                    score += (10 - count);
                }
            }
        }
    }
    return score;
}