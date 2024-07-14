int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - (frame % 2);
            frame++;
        } else {
            int count = 0;
            while (c != ' ') {
                count *= 10 + (c - '0');
                c = s[s.find(c) + 1];
            }
            if (count == 10) {
                score += 10;
                frame++;
            } else {
                score += count;
                if (frame < 9) {
                    frame++;
                }
            }
        }
    }
    return score;
}