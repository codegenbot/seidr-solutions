int score(string s) {
    int totalScore = 0;
    int frame = 1;
    int ball = 0;
    int rolls[21];

    for (char c : s) {
        if (c == 'X') {
            rolls[ball++] = 10;
            if (frame < 10) {
                rolls[ball++] = 0;
            }
        } else if (c == '/') {
            rolls[ball-1] = 10 - rolls[ball-2];
            if (frame < 10) {
                rolls[ball++] = 0;
            }
        } else if (c == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = c - '0';
        }
    }

    for (int i = 0; frame < 10 && i < 18; i += 2) {
        if (rolls[i] == 10) {
            totalScore += 10 + rolls[i+2] + rolls[i+4];
        } else if (rolls[i] + rolls[i+1] == 10) {
            totalScore += 10 + rolls[i+2];
        } else {
            totalScore += rolls[i] + rolls[i+1];
        }
        frame++;
    }

    totalScore += rolls[18] + rolls[19] + rolls[20];

    return totalScore;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}