int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int rolls[22];
    for (char c : s) {
        if (c == 'X') {
            rolls[ball++] = 10;
            if (frame < 10) {
                rolls[ball++] = 0;
            }
        } else if (c == '/') {
            rolls[ball++] = 10 - rolls[ball - 1];
        } else if (c == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = c - '0';
        }
    }
    for (int i = 0; i < 20 && frame <= 10; ++i) {
        if (rolls[i] == 10) {
            score += 10 + rolls[i + 1] + rolls[i + 2];
            frame++;
        } else if (rolls[i] + rolls[i + 1] == 10) {
            score += 10 + rolls[i + 2];
            i++;
            frame++;
        } else {
            score += rolls[i] + rolls[i + 1];
            i++;
            frame++;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}