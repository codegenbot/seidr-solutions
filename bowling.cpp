int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == '/') {
            if (currentRoll < 10) {
                if (currentRoll + 1 <= stoi(s.substr(0, s.find('/')))) {
                    score += 10 + currentRoll;
                    break;
                } else {
                    score += 10;
                }
            } else {
                score += 10;
            }
            currentRoll = 0;
        } else if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else if (isdigit(c)) {
            int roll = stoi(string(1, c));
            if (currentRoll + roll > 10) {
                score += 10;
                currentRoll = 0;
            } else {
                currentRoll += roll;
            }
        }
    }
    return score;
}