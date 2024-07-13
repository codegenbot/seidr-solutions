int score(string input) {
    int totalScore = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores(22, 0);

    for (char c : input) {
        if (c == 'X') {
            scores[ball] = 10;
            scores[ball + 1] = 0;
            ball += 2;
        } else if (c == '/') {
            scores[ball] = 10 - scores[ball - 1];
            ball++;
        } else if (c == '-') {
            scores[ball] = 0;
            ball++;
        } else {
            scores[ball] = c - '0';
            ball++;
        }
    }

    for (int i = 0; frame <= 10; i += 2) {
        if (scores[i] == 10) {
            totalScore += 10 + scores[i + 2] + scores[i + 4];
            frame++;
        } else if (scores[i] + scores[i + 1] == 10) {
            totalScore += 10 + scores[i + 2];
            frame++;
        } else {
            totalScore += scores[i] + scores[i + 1];
            frame++;
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