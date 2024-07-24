int scoreOfBowlingRound(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (s[i + 2] == 'X') ? 10 : (s[i + 2] - '0');
                score += (s[i + 4] == 'X') ? 10 : (s[i + 4] == '/') ? 10 - (s[i + 2] - '0') : (s[i + 4] - '0');
            }
            ++frame;
            ball = 0;
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0');
            score += (s[i + 1] == 'X') ? 10 : (s[i + 1] - '0');
            ++frame;
            ball = 0;
        } else if (s[i] == '-') {
            ball = (ball == 0) ? 1 : 0;
        } else {
            score += s[i] - '0';
            if (ball == 0) {
                ++ball;
            } else {
                ++frame;
                ball = 0;
            }
        }
    }
    return score;
}