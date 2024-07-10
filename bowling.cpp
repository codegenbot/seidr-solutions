int bowling(string s) {
    int score = 0;
    bool inFrame = false;
    int currentFrameScore = 0;
    vector<int> frames;

    for (char c : s) {
        if (c == '/') {
            inFrame = true;
            continue;
        }

        if (!inFrame) {
            currentFrameScore++;
        } else {
            if (c == 'X') {
                score += 10 + currentFrameScore;
                currentFrameScore = 0;
            } else if (c >= '1' && c <= '9') {
                int strikeOrSpare = c - '0';
                score += strikeOrSpare + currentFrameScore;
                currentFrameScore = 0;
            }
        }
    }

    return score;
}