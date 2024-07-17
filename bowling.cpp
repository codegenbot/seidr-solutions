int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 10 + (roll > 0 ? 10 : 0);
            roll = 0;
        } else if (s[i] == '/') {
            int prevRoll = std::stoi(s.substr(i - 1, 1));
            int thisRoll = 10 - prevRoll;
            score += prevRoll + thisRoll;
            i++;
            roll = 0;
        } else {
            roll += s[i] - '0';
        }
        if (roll == 10) {
            score += 10;
            roll = 0;
        }
    }
    return score;
}