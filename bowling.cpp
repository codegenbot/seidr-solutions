int score(string input) {
    int totalScore = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores(21, 0);

    for (char c : input) {
        if (c == 'X') {
            scores[ball] = 10;
            scores[ball + 1] = 0;
            ball += 2;
            frame++;
        } else if (c == '/') {
            scores[ball] = 10 - scores[ball - 1];
            ball++;
            frame++;
        } else if (c == '-') {
            scores[ball] = 0;
            ball++;
        } else {
            scores[ball] = c - '0';
            ball++;
            if (frame % 2 == 0) {
                frame++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        int frameScore = scores[i * 2] + scores[i * 2 + 1];
        if (frameScore == 10) {
            totalScore += frameScore + scores[i * 2 + 2];
        } else {
            totalScore += frameScore;
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