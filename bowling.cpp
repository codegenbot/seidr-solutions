int bowlingScore(string input) {
    int score = 0;
    bool firstInFrame = true;
    vector<int> frameScores;

    for (char c : input) {
        if (c == '/') {
            continue;
        }
        if (isdigit(c)) {
            int pins = c - '0';
            if (firstInFrame) {
                frameScores.push_back(pins);
                firstInFrame = false;
            } else {
                if (frameScores.back() + pins > 10) {
                    score += 10 - (10 - frameScores.back() - pins);
                    frameScores.pop_back();
                } else {
                    frameScores.back() += pins;
                }
            }
        } else if (c == 'X') {
            score += 10;
            firstInFrame = true;
        } else if (c == '-') {
            firstInFrame = true;
        } else {
            int pins = 2 * (c - '0');
            score += pins;
            firstInFrame = false;
        }
    }

    for (int i = 0; i < frameScores.size(); ++i) {
        if (frameScores[i] == 10) {
            continue;
        } else if (frameScores[i] + frameScores[i+1] > 10) {
            score += 10 - (10 - frameScores[i] - frameScores[i+1]);
            i++;
        } else {
            score += frameScores[i];
        }
    }

    return score;
}