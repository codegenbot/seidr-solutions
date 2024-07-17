int bowling(string s) {
    int score = 0;
    bool lastRollInFrame = false;
    for (char c : s) {
        if (c == 'X') { 
            score += 30; 
            lastRollInFrame = true; 
        } else if (c == '/') {
            score += 10 - (10 - ((lastRollInFrame) ? 20 : 10));
            lastRollInFrame = false;
        } else if (isdigit(c)) {
            int thisRoll = c - '0';
            if (!lastRollInFrame) {
                score += thisRoll + 10; 
                lastRollInFrame = true;
            } else {
                score += thisRoll;
            }
        }
    }
    return score;
}