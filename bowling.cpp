int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int rolls[22] = {0};

    for (char c : s) {
        if (c == 'X') {
            rolls[ball++] = 10;
            rolls[ball++] = 0;
            frame++;
        } else if (c == '/') {
            rolls[ball-1] = 10 - rolls[ball-2];
            frame++;
        } else if (c == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = c - '0';
        }
    }

    for (int i = 0; frame <= 10; i+=2) {
        if (rolls[i] == 10) {
            score += 10 + rolls[i+2] + rolls[i+3];
            frame++;
        } else if (rolls[i] + rolls[i+1] == 10) {
            score += 10 + rolls[i+2];
            i++;
            frame++;
        } else {
            score += rolls[i] + rolls[i+1];
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