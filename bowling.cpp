int bowlingScore(const std::string& s) {
    int score = 0;
    int currentRoll = 0;

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];

        if (c == 'X') {
            score += 10;
            // handle strike
            if (i + 3 < s.size()) {
                int nextRoll1 = s[i+1] - '0';
                int nextRoll2 = s[i+2] - '0';
                score += nextRoll1 + nextRoll2;
            }
        } else if (c == '/') {
            // handle two-roll frame
            score += currentRoll;
            if (i + 3 < s.size()) {
                int nextRoll = s[i+1] - '0';
                currentRoll = 10 - c;
                if (nextRoll > 0) {
                    currentRoll -= nextRoll;
                }
            } else {
                currentRoll = 0;
            }
        } else {
            if (isdigit(c)) {
                if (currentRoll > 9) {
                    score += currentRoll + c - '0';
                    currentRoll = 0;
                } else {
                    currentRoll *= 10;
                    currentRoll += c - '0';
                }
            } else {
                // handle invalid characters
                return -1; 
            }
        }
    }

    score += currentRoll;

    return score;
}