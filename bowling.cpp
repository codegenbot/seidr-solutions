int bowlingScore(string input) {
    int score = 0;
    int frame = 0;
    int ball = 0;
    vector<int> frames(10, 0);

    for (char c : input) {
        if (c == 'X') {
            frames[frame++] = 10;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame - 1];
            frame++;
        } else if (c == '-') {
            frames[frame++] = 0;
        } else {
            frames[frame] += c - '0';
            ball = 1 - ball;
            if (ball == 0) {
                frame++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
        if (frames[i] == 10 && i < 9) {
            score += frames[i + 1];
            if (frames[i + 1] == 10) {
                score += frames[i + 2];
            } else {
                score += frames[i + 2] % 10;
            }
        } else if (frames[i] + frames[i - 1] == 10 && i < 9) {
            score += frames[i + 1] / 10;
        }
    }

    return score;
}