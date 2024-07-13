int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    int rolls[21] = {0};

    for (char c : s) {
        if (c == 'X') {
            rolls[ball++] = 10;
            if (frame < 10) {
                rolls[ball++] = 0;
            }
        } else if (c == '/') {
            rolls[ball - 1] = 10 - rolls[ball - 2];
        } else if (c == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = c - '0';
        }
    }

    for (int i = 0; frame < 10 && i < ball; i += 2, frame++) {
        if (rolls[i] == 10) {
            total += 10 + rolls[i + 2] + rolls[i + 3];
            if (rolls[i + 2] == 10) {
                total += rolls[i + 4];
            }
        } else if (rolls[i] + rolls[i + 1] == 10) {
            total += 10 + rolls[i + 2];
        } else {
            total += rolls[i] + rolls[i + 1];
        }
    }

    while (frame++ < 10) {
        total += rolls[ball++];
    }

    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}