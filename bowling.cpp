int bowlingScore(std::string s) {
    int score = 0;
    int currentRoll = 0;
    std::istringstream iss(s);
    char c;
    while (iss >> c) {
        if (c == 'X') {
            score += 30;
            currentRoll = 10;
        } else if (c == '/') {
            score += currentRoll + 10;
            currentRoll = 0;
        } else {
            int roll = c - '0';
            currentRoll += roll;
            if (iss.peek() == '/' || iss.peek() == 'X') {
                if (currentRoll < 10) {
                    score += roll * 2;
                } else {
                    score += roll;
                }
                currentRoll = 0;
            }
        }
    }
    return score;
}