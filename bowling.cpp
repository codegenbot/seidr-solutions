int bowlingScore(std::string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 + (10 - (i > 0 ? s[i-1] - '0' : 0));
        } else {
            int currentFrame = 0;
            for (int j = i; j < 10 && j <= i+1; j++) {
                if (s[j] == 'X') {
                    score += 30;
                    break;
                } else if (s[j] == '/') {
                    score += 10 + currentFrame;
                    break;
                } else {
                    currentFrame += s[j] - '0';
                }
            }
        }
    }
    return score;
}