int calculateFrameScore(const std::string& s, int index) {
    if (s[index] == 'X') {
        int frameScore = 10;
        int remainingBalls = 2;
        for (int i = index + 1; i < s.size() && remainingBalls > 0; ++i) {
            if (s[i] == 'X') {
                frameScore += 10;
            } else if (s[i] == '/') {
                frameScore += 10 - (s[i - 1] - '0');
            } else {
                frameScore += s[i] - '0';
            }
            remainingBalls--;
        }
        return frameScore;
    } else if (s[index] == '/') {
        if (s[index - 2] == 'X' || s[index - 1] == '/') {
            return 10 + (s[index + 1] == 'X' ? 10 : s[index + 1] - '0');
        } else {
            return 10 - (s[index - 1] - '0') + (s[index + 1] == 'X' ? 10 : s[index + 1] - '0');
        }
    } else {
        return s[index] - '0';
    }
}