int bowlingScore(const string &bowling) {
    int score = 0;
    int currentFrame = 0;
    vector<int> frameScores;

    for (char c : bowling) {
        if (c == '/') {
            frameScores.push_back(10);
            currentFrame++;
        } else if (isdigit(c)) {
            int pinCount = 0;
            while (c != '/' && c >= '0' && c <= '9') {
                pinCount = pinCount * 10 + (c - '0');
                c = next(c, bowling);
            }
            if (pinCount > 10) {
                frameScores.push_back(10);
            } else {
                frameScores.push_back(pinCount);
            }
            currentFrame++;
        }
    }

    for (int i = 0; i < frameScores.size(); i++) {
        if (frameScores[i] == 10) {
            score += 10;
        } else {
            if (i + 1 < frameScores.size()) {
                int nextPinCount = frameScores[i + 1];
                if (nextPinCount + frameScores[i] > 10) {
                    score += 10 + nextPinCount - 10;
                } else {
                    score += 10 + nextPinCount;
                }
            } else {
                score += frameScores[i];
            }
        }
    }

    return score;
}