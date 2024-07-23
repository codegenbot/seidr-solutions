int calculateFrameScore(const std::string& s, size_t index) {
    if (s.empty() || index >= s.size()) {
        return 0;
    }
    
    if (s.at(index) == 'X') {
        int frameScore = 10;
        int remainingBalls = 2;
        for (size_t i = index + 1; i < s.size() && remainingBalls > 0; ++i) {
            if (s.at(i) == 'X') {
                frameScore += 10;
            } else if (s.at(i) == '/') {
                frameScore += 10 - (s.at(i - 1) - '0');
            } else {
                frameScore += int(s.at(i) - '0');
            }
            remainingBalls--;
        }
        return frameScore;
    } else if (s.at(index) == '/') {
        if (index >= 2 && (s.at(index - 2) == 'X' || s.at(index - 1) == '/')) {
            return 10 + (index + 1 < s.size() && s.at(index + 1) == 'X' ? 10 : s.at(index + 1) - '0');
        } else if (index >= 1) {
            return 10 - (s.at(index - 1) - '0') + (index + 1 < s.size() && s.at(index + 1) == 'X' ? 10 : s.at(index + 1) - '0');
        }
    } else {
        return int(s.at(index) - '0');
    }
    
    return 0;
}