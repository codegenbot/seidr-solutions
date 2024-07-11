int score(string input) {
    int totalScore = 0;
    int frame = 1;
    int ball = 0;
    int rolls[21];

    for (char c : input) {
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

    for (int i = 0; frame < 10 && i < ball; i += 2) {
        if (rolls[i] == 10) {
            totalScore += 10 + rolls[i+2] + rolls[i+3];
        } else if (rolls[i] + rolls[i+1] == 10) {
            totalScore += 10 + rolls[i+2];
        } else {
            totalScore += rolls[i] + rolls[i+1];
        }
        frame++;
    }

    for (int i = ball - 2; i < ball; i++) {
        totalScore += rolls[i];
    }

    return totalScore;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}