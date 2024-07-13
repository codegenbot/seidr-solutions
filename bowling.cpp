int score(string input) {
    int totalScore = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores(21, 0);

    for (char c : input) {
        if (c == 'X') {
            scores[ball] = 10;
            ball++;
            if (frame < 10) {
                scores[ball] = 0;
                ball++;
            }
        } else if (c == '/') {
            scores[ball] = 10 - scores[ball - 1];
            ball++;
        } else if (c == '-') {
            scores[ball] = 0;
            ball++;
        } else {
            scores[ball] = c - '0';
            ball++;
            if (frame < 10) {
                scores[ball] = 0;
                ball++;
            }
        }

        if (frame < 10 && (c == 'X' || c == '/')) {
            frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (scores[i * 2] == 10) {
            totalScore += 10 + scores[i * 2 + 2] + scores[i * 2 + 3];
        } else if (scores[i * 2] + scores[i * 2 + 1] == 10) {
            totalScore += 10 + scores[i * 2 + 2];
        } else {
            totalScore += scores[i * 2] + scores[i * 2 + 1];
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