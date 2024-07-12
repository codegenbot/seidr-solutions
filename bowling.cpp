int bowlingScore(const string& s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames(11, 0);
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            frames[frame] = 10;
            frame++;
            ball = 0;
        } else if (c == '/') {
            score += 10 - frames[frame - 1];
            frames[frame] = 10 - frames[frame - 1];
            frame++;
            ball = 0;
        } else if (c == '-') {
            frames[frame] = 0;
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        } else {
            score += c - '0';
            frames[frame] += c - '0';
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        }
    }
    return score;
}