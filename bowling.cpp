int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 + (frame == 9 ? 10 : getRemainingFrame(s, frame));
            frame++;
        } else {
            int remaining = c - '0';
            score += remaining;
            if (remaining < 10) {
                if (s[frame] == 'X') {
                    score += 10 - remaining;
                    frame++;
                } else if (s[frame] == '/') {
                    score += getRemainingFrame(s, frame);
                    frame++;
                }
            } else {
                frame++;
            }
        }
    }
    return score;
}

int getRemainingFrame(string s, int frame) {
    for (char c : s.substr(frame * 2, 2)) {
        if (c == 'X') {
            return 10;
        } else if (c == '/') {
            return 10 - (frame < 9 ? s[frame * 2 + 1] - '0' : 0);
        }
    }
    return 0;
}