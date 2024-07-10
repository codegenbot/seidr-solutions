int bowlingScore(const string& input) {
    int score = 0;
    bool lastRollStrike = false;

    vector<int> frames;
    for (char c : input) {
        if (c == 'X') {
            frames.push_back(10);
            lastRollStrike = true;
        } else if (c == '/') {
            frames.push_back(10 - (frames.back() + 1));
            lastRollStrike = false;
        } else {
            int frameScore = c - '0';
            if (!lastRollStrike) {
                frames.push_back(frameScore);
            } else {
                frames.back() += frameScore;
            }
        }
    }

    return score;
}