int bowlingScore(std::string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10;
            if (i < s.length() - 1) {
                int val = s[i + 1] - '0';
                if (val >= 7) {
                    score += val * 2;
                    i++; // Skip the second roll
                } else {
                    score += val * 2;
                }
            }
        } else if (c == '-') {
            score += 10;
        } else {
            int val = c - '0';
            if (roll1 == 0) {
                roll1 = val;
            } else {
                if (roll1 + val >= 10) {
                    score += 10;
                    roll1 = 0;
                    roll2 = val;
                } else {
                    score += roll1 + val;
                    roll1 = 0;
                    roll2 = 0;
                }
            }
        }
    }
    return score; 
}