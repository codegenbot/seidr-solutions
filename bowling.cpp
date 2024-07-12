int calculateBowlingScore(string bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int frames[10] = {0};

    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            frames[frame-1] += 10;
            if (frame < 10) frame++;
            ball = 0;
        } else if (c == '/') {
            score += 10 - frames[frame-1];
            frames[frame-1] += 10 - frames[frame-1];
            if (frame < 10) frame++;
            ball = 0;
        } else if (c == '-') {
            ball++;
        } else {
            score += c - '0';
            frames[frame-1] += c - '0';
            if (ball == 1) {
                score += c - '0';
                frames[frame-1] += c - '0';
                if (frame < 10) frame++;
                ball = 0;
            } else {
                ball++;
            }
        }
    }

    return score;
}