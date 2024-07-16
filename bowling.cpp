int bowling(string s) {
    int score = 0;
    int currentFrameScore = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            currentFrameScore += 10 + (i >= 2 ? 10 : 20);
        } else if (s[i] == '/') {
            int nextIndex = i + 1;
            while (nextIndex < s.size() && !isdigit(s[nextIndex])) {
                ++nextIndex;
            }
            int strikeCount = 0;
            while (i <= nextIndex && s.substr(i, 2) == "X ") {
                score += 10;
                currentFrameScore = 10;
                i = nextIndex;
                strikeCount++;
            }
            if (strikeCount > 1) {
                continue;
            }
            int strikeBonus = strikeCount * 10;
            if (i < s.size()) {
                currentFrameScore += (s[i] - '0') + strikeBonus;
            }
        } else {
            int strikeBonus = currentFrameScore >= 10 ? currentFrameScore : 0;
            score += currentFrameScore + strikeBonus;
            currentFrameScore = 0;
        }
    }
    return score;
}