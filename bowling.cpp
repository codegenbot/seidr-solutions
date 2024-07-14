int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - (stoi(s.substr(0, s.find('/'))) + stoi(s.substr(s.find('/') + 1, 1)) - 10);
            currentFrame++;
        } else {
            int pins = c - '0';
            if (currentFrame < 10) {
                score += pins;
                if (pins == 10) {
                    currentFrame++;
                }
            } else {
                score += pins;
            }
        }
    }
    return score;
}