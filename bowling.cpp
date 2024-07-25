int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - ((s[s.length() - 1] - '0'));
            currentFrame++;
        } else {
            int strike = false;
            for (char d : s.substr(s.find(c) + 1)) {
                if (d == 'X') {
                    score += 30;
                    strike = true;
                    break;
                } else if (d == '/') {
                    score += 10 - ((s[s.length() - 1] - '0'));
                    strike = true;
                    break;
                }
            }
            if (!strike) {
                int pins = c - '0' + s.find(c) % 2 ? 10 : (c - '0');
                score += pins;
                currentFrame++;
            }
        }
    }
    return score;
}