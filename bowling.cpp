int score(string s) {
    int sum = 0;
    int frame = 1;
    int ball = 0;
    int rolls[22] = {0};

    for (char c : s) {
        if (c == 'X') {
            rolls[ball++] = 10;
            if (frame < 10) {
                rolls[ball++] = 0;
            }
            frame++;
        } else if (c == '/') {
            rolls[ball++] = 10 - rolls[ball-1];
            frame++;
        } else if (c == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = c - '0';
        }
    }

    ball = 0;
    frame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (frame < 10 && rolls[ball] == 10) {
            sum += 10 + rolls[ball+1] + rolls[ball+2];
            ball++;
        } else if (frame < 10 && rolls[ball] + rolls[ball+1] == 10) {
            sum += 10 + rolls[ball+2];
            ball += 2;
        } else {
            sum += rolls[ball] + rolls[ball+1];
            ball += 2;
        }
        frame++;
    }

    return sum;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}