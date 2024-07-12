int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    int frames[21] = {0};

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            frames[frame++] = 10;
        } else if (s[i] == '/') {
            frames[frame++] = 10 - frames[frame - 1];
        } else if (s[i] == '-') {
            frames[frame++] = 0;
        } else {
            frames[frame++] = s[i] - '0';
        }
    }

    for (int i = 0; i < 10; i++) {
        if (frames[i * 2] == 10) {
            score += 10 + frames[i * 2 + 1] + frames[i * 2 + 2];
            if (frames[i * 2 + 2] == 10) {
                score += frames[i * 2 + 4];
            }
        } else if (frames[i * 2] + frames[i * 2 + 1] == 10) {
            score += 10 + frames[i * 2 + 2];
        } else {
            score += frames[i * 2] + frames[i * 2 + 1];
        }
    }

    return score;
}