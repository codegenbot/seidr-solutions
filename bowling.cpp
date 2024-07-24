int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - (currentFrame < 10 ? stoi(string(1, c)) : 0);
            currentFrame++;
        } else {
            int pins = 10 - stoi(string(1, c));
            score += pins;
            currentFrame++;
            if (currentFrame < 10) {
                if (s[currentFrame * 2 - 1] == 'X' || s[currentFrame * 2 - 1] == '/') {
                    score += 10;
                } else {
                    score += stoi(string(1, s[currentFrame * 2 - 1])) + pins;
                }
            }
        }
    }
    return score;
}