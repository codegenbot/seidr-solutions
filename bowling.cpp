int score(string s) {
    int total = 0;
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
            rolls[ball - 1] = 10 - rolls[ball - 2];
        } else if (c == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = c - '0';
        }
    }
    for (int i = 0; i < 10; i++) {
        if (rolls[frame * 2 - 2] == 10) {
            total += 10 + rolls[frame * 2] + rolls[frame * 2 + 1];
            frame++;
        } else if (rolls[frame * 2 - 2] + rolls[frame * 2 - 1] == 10) {
            total += 10 + rolls[frame * 2];
            frame++;
        } else {
            total += rolls[frame * 2 - 2] + rolls[frame * 2 - 1];
            frame++;
        }
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}