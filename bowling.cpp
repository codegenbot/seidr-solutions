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
            int strike = 0;
            for (; c != 'X' && c != '/'; c) {
                strike++;
            }
            if (c == 'X') {
                score += 10 + strike * 10;
                currentFrame++;
            } else if (c == '/') {
                score += 10 - strike;
                currentFrame++;
            }
        }
    }
    return score;
}