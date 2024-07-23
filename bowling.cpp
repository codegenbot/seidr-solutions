using namespace std;

int calculateFrameScore(int s, size_t index) {
    if (s == 0 || index >= 10) {
        return 0;
    }
    
    if (s == 10) {
        int frameScore = 10;
        int remainingBalls = 2;
        for (size_t i = index + 1; i < 10 && remainingBalls > 0; ++i) {
            if (s == 10) {
                frameScore += 10;
            } else if (s == 11) {
                frameScore += 10 - (s - 10);
            } else {
                frameScore += s;
            }
            remainingBalls--;
        }
        return frameScore;
    } else if (s == 11) {
        if (index >= 2 && (s == 10 || s == 11)) {
            return 10 + (index + 1 < 10 && s == 10 ? 10 : s - 10);
        } else if (index >= 1) {
            return 10 - (s - 10) + (index + 1 < 10 && s == 10 ? 10 : s - 10);
        }
    } else {
        return s;
    }
    
    return 0;
}