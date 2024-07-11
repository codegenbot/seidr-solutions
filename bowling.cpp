int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    int rolls[22] = {0};

    for (char c : s) {
        if (c == 'X') {
            rolls[ball++] = 10;
            if (frame < 10) {
                rolls[ball++] = 0;
            }
        } else if (c == '/') {
            rolls[ball++] = 10 - rolls[ball - 2];
        } else if (c == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = c - '0';
        }
    }

    for (int i = 0; frame < 10 && i < ball; ++i) {
        if (rolls[i] == 10) {
            total += 10 + rolls[i + 1] + rolls[i + 2];
            ++frame;
        } else if (rolls[i] + rolls[i + 1] == 10) {
            total += 10 + rolls[i + 2];
            i += 2;
            ++frame;
        } else {
            total += rolls[i] + rolls[i + 1];
            i += 1;
            ++frame;
        }
    }

    for (int i = ball - 2; i < ball; ++i) {
        total += rolls[i];
    }

    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}