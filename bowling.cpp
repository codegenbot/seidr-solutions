int bowlingScore(const string& s) {
    int score = 0;
    int frame = 0;
    int ball = 0;
    vector<int> rolls(22, 0);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            rolls[ball++] = 10;
            if (frame < 9) {
                rolls[ball++] = 0;
            }
            frame++;
        } else if (s[i] == '/') {
            rolls[ball++] = 10 - rolls[ball - 2];
            frame++;
        } else if (s[i] == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = s[i] - '0';
            if (frame % 2 == 1 || s[i] == '0') {
                frame++;
            }
        }
    }

    for (int i = 0; i < 20; i += 2) {
        if (rolls[i] == 10) {
            score += 10 + rolls[i + 2] + rolls[i + 4];
        } else if (rolls[i] + rolls[i + 1] == 10) {
            score += 10 + rolls[i + 2];
        } else {
            score += rolls[i] + rolls[i + 1];
        }
    }

    return score;
}