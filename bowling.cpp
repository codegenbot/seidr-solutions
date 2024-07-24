int score(string input) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    int rolls[22];

    for (char c : input) {
        if (c == 'X') {
            rolls[ball++] = 10;
            if (frame < 10) {
                rolls[ball++] = 0;
            }
            frame++;
        } else if (c == '/') {
            rolls[ball - 1] = 10 - rolls[ball - 2];
        } else if (c == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = c - '0';
        }
    }

    for (int i = 0; i < 20; i += 2) {
        if (rolls[i] == 10) {
            total += 10 + rolls[i + 2] + rolls[i + 4];
        } else if (rolls[i] + rolls[i + 1] == 10) {
            total += 10 + rolls[i + 2];
        } else {
            total += rolls[i] + rolls[i + 1];
        }
    }

    return total;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}