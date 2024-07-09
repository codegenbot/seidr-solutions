int bowlingScore(string s) {
    int score = 0;
    int frames = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frames++;
        } else if (c == '/') {
            score += 10 + (frames < 9 ? 10 : 0);
            frames++;
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                frames++;
            }
        }
    }
    return score;
}