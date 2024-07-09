int bowlingScore(std::string s) {
    int score = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += currentRoll + 10;
        } else {
            int currentRoll = c - '0';
            if (s[1] == '/' || s[2] == 'X') {
                score += currentRoll * 2;
            } else {
                score += currentRoll;
            }
        }
    }
    return score;