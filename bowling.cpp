int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;
    
    for (char c : s) {
        if (c == '/') {
            if (firstRollInFrame) {
                score += 10 - (c - '0');
                firstRollInFrame = false;
            } else {
                score += min(c - '0', 10);
                firstRollInFrame = true;
            }
        } else {
            if (firstRollInFrame) {
                score += c - '0';
                firstRollInFrame = false;
            } else {
                int roll = c - '0';
                if (roll == 10) {
                    score += roll;
                    firstRollInFrame = true;
                } else {
                    score += roll;
                    if (s[s.size() - 1] != '/') {
                        score += min(s[s.size() - 1] - '0', 10);
                    }
                    break;
                }
            }
        }
    }
    
    return score;
}