int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            if (currentFrame < 10) {
                score += min(10 - currentFrame, stoi(string(1, c))) * 10;
            }
            currentFrame++;
        } else {
            int pins = 0;
            while (c != '/') {
                pins *= 10;
                pins += c - '0';
                if (currentFrame < 10) {
                    score += pins;
                }
                c = s[s.find(c) + 1];
            }
            currentFrame++;
        }
    }
    return score;
}