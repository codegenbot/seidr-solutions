int bowlingScore(const std::string& s) {
    if (s.empty()) {
        throw std::invalid_argument("No input provided");
    }
    int score = 0;
    int prevRoll = 0;
    bool isStrike = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            isStrike = true;
        } else if (s[i] == '/') {
            if (isStrike) {
                score += prevRoll * 2;
                isStrike = false;
            } else {
                int roll1 = std::stoi(s.substr(i - 1, 1));
                int roll2 = std::stoi(s.substr(i + 1, 1));
                score += (roll1 + roll2);
            }
        } else if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') {
            int roll = std::stoi(s.substr(i, 1));
            if (isStrike) {
                score += roll + prevRoll * 2;
                isStrike = false;
            } else {
                score += roll;
            }
            prevRoll = roll;
        }
    }

    return score;