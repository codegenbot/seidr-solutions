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
            int strike = false;
            for (int i = 2; i >= 1 && !strike; --i) {
                if (c == 'X' || c == '/') {
                    score += i * 10;
                    strike = true;
                    break;
                }
                score += i * (c - '0');
            }
            currentFrame++;
        }
    }
    return score;
}