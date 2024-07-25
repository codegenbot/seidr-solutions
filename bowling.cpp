int calculateScore(string s) {
    int score = 0;
    bool lastRoll = false;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
            lastRoll = true;
        } else if (isdigit(s[i])) {
            int frameScore = 0;
            if (lastRoll) {
                frameScore = 10 - (10 - (s[i] - '0')) + (s[i + 1] - '0');
                i++;
            } else {
                frameScore = s[i] - '0';
                if (i < 8 && s[i + 1] == '/') {
                    frameScore += s[i + 2] - '0' + s[i + 3] - '0';
                    i += 3;
                }
            }
            score += frameScore;
        } else if (s[i] == '/') {
            lastRoll = false;
        }
    }
    return score;
}