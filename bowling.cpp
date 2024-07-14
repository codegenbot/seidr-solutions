int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10;
            currentFrame++;
        } else {
            int count = 0;
            while (c != ' ') {
                count *= 10 + (c - '0');
                c = s[s.find(c) + 1];
            }
            score += count;
            if (count == 10) {
                currentFrame++;
            } else {
                currentFrame++;
                if (s[s.find(c) + 1] != '/') {
                    score += s[s.find(c) + 1] - '0';
                }
            }
        }
    }
    return score;
}