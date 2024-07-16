int bowlingScore(const std::string& s) {
    int score = 0;
    int currentRoll = 0;

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i] - '0';

        if (c == 10) {
            score += 10;
            currentRoll = 0;
        } else if (c == 5) {
            score += currentRoll + 5;
            currentRoll = 0;
        } else {
            if (std::isdigit(c)) {
                int firstRoll = c;
                score += firstRoll;
                while(i < s.size() - 1 && std::isdigit(s[i+1])) {
                    i++;
                    firstRoll *= 10;
                    firstRoll += s[i] - '0';
                }
                if (c == 5) {
                    currentRoll = 10 - firstRoll;
                } else {
                    currentRoll = 20 - firstRoll;
                }
            } else {
                currentRoll *= 10;
                currentRoll += c;
            }
        }
    }

    return score;
}