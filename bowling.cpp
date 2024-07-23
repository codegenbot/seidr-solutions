using namespace std;

int calculateFrameScore(const std::string &s, size_t index) {
    if (s.empty() || index >= s.size()) {
        return 0;
    }
    
    if (s[index] == 'X') {
        int frameScore = 10;
        int remainingBalls = 2;
        for (size_t i = index + 1; i < s.size() && remainingBalls > 0; ++i) {
            if (s[i] == 'X') {
                frameScore += 10;
            } else if (s[i] == '/') {
                frameScore += 10 - (s[i - 1] - '0');
            } else {
                frameScore += int(s[i]) - '0';
            }
            remainingBalls--;
        }
        return frameScore;
    } else if (s[index] == '/') {
        if (index >= 2 && (s[index - 2] == 'X' || s[index - 1] == '/')) {
            return 10 + (index + 1 < s.size() && s[index + 1] == 'X' ? 10 : s[index + 1] - '0');
        } else if (index >= 1) {
            return 10 - (s[index - 1] - '0') + (index + 1 < s.size() && s[index + 1] == 'X' ? 10 : s[index + 1] - '0');
        }
    } else {
        return int(s[index]) - '0';
    }
    
    return 0;
}