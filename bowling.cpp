int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame < 9 ? 10 : 0);
            frame++;
        } else if (c == '/') {
            score += 10 - (10 - (s[s.find('/') + 1] - '0')) - (10 - (s[s.find('/') + 2] - '0'));
            frame++;
        } else {
            int current = c - '0';
            if (current < 10) {
                score += current;
                frame++;
            } else {
                score += current + (c == s[s.find('/') + 1] ? 10 : 0);
                frame++;
            }
        }
    }
    return score;
}