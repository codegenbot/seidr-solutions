int score(string s) {
    int totalScore = 0;
    int frame = 0;
    int rolls[22];

    for (char c : s) {
        if (c == 'X') {
            rolls[frame] = 10;
            frame++;
        } else if (c == '/') {
            rolls[frame-1] = 10 - rolls[frame-1];
        } else if (c == '-') {
            rolls[frame] = 0;
            frame++;
        } else {
            rolls[frame] = c - '0';
            if (frame % 2 == 1) {
                if (rolls[frame-1] + rolls[frame] == 10) {
                    totalScore += rolls[frame+1];
                }
            }
            frame++;
        }
    }
    int i = 0;
    for (int f = 0; f < 10; f++) {
        if (rolls[i] == 10) {
            totalScore += 10 + rolls[i+1] + rolls[i+2];
            i++;
        } else if (rolls[i] + rolls[i+1] == 10) {
            totalScore += 10 + rolls[i+2];
            i += 2;
        } else {
            totalScore += rolls[i] + rolls[i+1];
            i += 2;
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