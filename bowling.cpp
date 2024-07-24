int score(string s) {
    int totalScore = 0;
    int frame = 0;
    int rolls[21] = {0};

    for (char c : s) {
        if (c == 'X') {
            rolls[frame] = 10;
            frame++;
        } else if (c == '/') {
            rolls[frame] = 10 - rolls[frame-1];
            frame++;
        } else if (c == '-') {
            rolls[frame] = 0;
            frame++;
        } else {
            rolls[frame] = c - '0';
            frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i*2] == 10) {
            totalScore += 10 + rolls[i*2+1] + rolls[i*2+2];
        } else if (rolls[i*2] + rolls[i*2+1] == 10) {
            totalScore += 10 + rolls[i*2+2];
        } else {
            totalScore += rolls[i*2] + rolls[i*2+1];
        }
    }

    return totalScore;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}