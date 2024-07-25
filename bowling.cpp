int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 + (frame < 9 ? 10 - (s.find('/', s.find('/') + 1)) : 0);
            frame++;
        } else {
            int count = c - '0';
            score += count;
            if (count < 10) {
                if (s[s.find(c) + 1] == '/') {
                    score += 10 - count;
                    frame++;
                } else {
                    score += s[s.find(c) + 1] - '0';
                    frame++;
                }
            }
        }
    }
    return score;
}