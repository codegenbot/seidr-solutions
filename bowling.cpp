int score(string input) {
    int totalScore = 0;
    int frame = 0;
    int rolls[21] = {0};

    for (char c : input) {
        if (c == 'X') {
            rolls[frame++] = 10;
        } else if (c == '/') {
            rolls[frame - 1] = 10 - rolls[frame - 2];
        } else if (c == '-') {
            rolls[frame++] = 0;
        } else {
            rolls[frame++] = c - '0';
        }
    }

    for (int i = 0; i < 10; ++i) {
        if (rolls[i * 2] == 10) {
            totalScore += 10 + rolls[i * 2 + 2] + rolls[i * 2 + 4];
            if (rolls[i * 2 + 2] == 10) {
                totalScore += rolls[i * 2 + 4];
            }
        } else if (rolls[i * 2] + rolls[i * 2 + 1] == 10) {
            totalScore += 10 + rolls[i * 2 + 2];
        } else {
            totalScore += rolls[i * 2] + rolls[i * 2 + 1];
        }
    }

    return totalScore;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}