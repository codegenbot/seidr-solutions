```
int bowlingScore(std::string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            score += 10;
            i += 2;
        } else {
            int val = s[i] - '0';
            if (i + 1 < s.length() && s[i + 1] == 'X') {
                score += 10 + val * 2;
                i += 2;
            } else if (i + 1 < s.length() && s[i + 1] == '/') {
                int nextVal = s[i + 1] - '0';
                if (val + nextVal >= 10) {
                    score += 10;
                    i += 2;
                } else {
                    score += val + nextVal;
                    i++;
                }
            } else {
                score += val;
                i++;
            }
        }
    }
    return score;
}