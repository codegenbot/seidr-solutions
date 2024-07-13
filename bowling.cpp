int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            if (s[i + 1] == 'X' || s[i + 2] == 'X') {
                roll1 = 10 - (s[i + 1] - '0');
                roll2 = 10 - (s[i + 2] - '0');
                score += roll1 + roll2;
            } else {
                int ten_frame = 10 - (s[i + 1] - '0') - (s[i + 2] - '0');
                score += ten_frame;
            }
        } else {
            roll1 = s[i] - '0';
            if (i < 8 && s[i + 1] == '/') {
                roll2 = 10 - roll1;
            } else {
                roll2 = s[i + 1] - '0';
            }
            score += roll1 + roll2;
        }
    }

    return score;
}