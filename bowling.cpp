int scoreBowlingRound(const string& input) {
    int score = 0;
    int frame = 0;
    int rolls = 0;
    vector<int> frameScores(10, 0);

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            frameScores[frame++] = 10;
            rolls = 0;
        } else if (c == '/') {
            score += 10 - frameScores[frame - 1];
            frameScores[frame++] = 10;
            rolls = 0;
        } else if (c == '-') {
            frameScores[frame++] = 0;
            rolls = 0;
        } else {
            int pins = c - '0';
            score += pins;
            frameScores[frame] += pins;
            if (++rolls == 2 || c == '9') {
                frame++;
                rolls = 0;
            }
        }
    }

    return score;
}