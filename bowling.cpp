int bowlingScore(const std::string& s) {
    int score = 0;
    int totalFrames = 0;
    for (auto it = s.begin(); it != s.end(); ++it) {
        char c = *it;
        if (c == 'X') {
            score += 30;
            totalFrames++;
        } else if (c == '/') {
            score += 10 + currentRoll;
            currentRoll = 0;
            totalFrames++;
        } else {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }
    return score;
}