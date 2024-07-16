int bowlingScore(const std::string& s) {
    int score = 0;
    int currentRoll = 0;

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        
        if (c == 'X') {
            score += 10;
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 5;
            currentRoll = 0;
        } else {
            if (std::isdigit(c)) {
                int firstRoll = c - '0';
                score += firstRoll;
                if (s.find('/') != std::string::npos) {
                    currentRoll = 10 - firstRoll;
                } else if (i < s.size() - 1) {
                    int secondRoll = s[i + 1] - '0';
                    score += secondRoll;
                    currentRoll = 10 - firstRoll - secondRoll;
                } else {
                    currentRoll = 20 - firstRoll;
                }
            } else {
                currentRoll *= 10;
                currentRoll += c - '0';
            }
        }
    }

    return score;
}