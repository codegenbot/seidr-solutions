int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int frame = 1; frame <= 10; ++frame) {
        if (s[2*frame-1] == '/') {
            roll1 = s[2*frame-2] - '0';
            roll2 = s[2*frame-1] - 'X' + 10;
        } else if (s[2*frame-1] == 'X') {
            roll1 = 10;
            roll2 = 0;
        } else {
            roll1 = s[2*frame-2] - '0';
            roll2 = s[2*frame-1] - '0';
        }

        if (roll1 + roll2 == 10) {
            ++score;
            score += roll1 + roll2;
        } else {
            score += roll1 + roll2;
        }
    }

    return score;
}