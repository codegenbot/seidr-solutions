int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, frame;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (isdigit(s[i - 1])) {
                roll1 = s[i - 1] - '0';
            } else {
                roll1 = 10;
            }
            if (isdigit(s[i + 1])) {
                roll2 = s[i + 1] - '0';
            } else {
                roll2 = 10 - roll1;
            }
        } else {
            roll1 = s[i] - '0';
            roll2 = 0;
        }

        if (roll1 + roll2 == 10) {
            score += 10 + bowlingScore(s.substr(i + 3));
            i += 2;
        } else {
            score += roll1 + roll2;
        }
    }

    return score;
}