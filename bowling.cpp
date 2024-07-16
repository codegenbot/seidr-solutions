int bowlingScore(string s) {
    int score = 0, frame = 0, ball = 0;
    vector<int> frames(10, 0);
    
    for (char c : s) {
        if (c == 'X') {
            frames[frame++] = 10;
            if (frame == 10) break;
        } else if (c == '/') {
            frames[frame++] = 10 - frames[frame - 1];
        } else if (c == '-') {
            frames[frame++] = 0;
        } else {
            frames[frame++] = c - '0';
        }
    }
    
    for (int i = 0; i < 10; ++i) {
        if (frames[i] == 10) {
            score += 10 + frames[i + 1] + frames[i + 2];
        } else if (frames[i] + frames[i + 1] == 10) {
            score += 10 + frames[i + 2];
            i++;
        } else {
            score += frames[i] + frames[i + 1];
            i++;
        }
    }
    
    return score;
}