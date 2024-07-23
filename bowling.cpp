int calculateFrameScore(const std::string& s, int index) {
    if (s.at(index) == 'X') {
        int frameScore = 10;
        int remainingBalls = 2;
        for (int i = index + 1; i < s.size() && remainingBalls > 0; ++i) {
            if (s.at(i) == 'X') {
                frameScore += 10;
            } else if (s.at(i) == '/') {
                frameScore += 10 - (s.at(i - 1) - '0');
            } else {
                frameScore += s.at(i) - '0';
            }
            remainingBalls--;
        }
        return frameScore;
    } else if (s.at(index) == '/') {
        if (s.at(index - 2) == 'X' || s.at(index - 1) == '/') {
            return 10 + (s.at(index + 1) == 'X' ? 10 : s.at(index + 1) - '0');
        } else {
            return 10 - (s.at(index - 1) - '0') + (s.at(index + 1) == 'X' ? 10 : s.at(index + 1) - '0');
        }
    } else {
        return s.at(index) - '0';
    }
}