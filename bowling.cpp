int score(string input) {
    int totalScore = 0;
    int frame = 1;
    int ball = 0;
    int rolls = 0;
    vector<int> scores(22, 0);

    for (char c : input) {
        if (c == 'X') {
            scores[rolls++] = 10;
            if (frame < 10) {
                scores[rolls++] = 0;
            }
            frame++;
        } else if (c == '/') {
            scores[rolls - 1] = 10 - scores[rolls - 2];
            if (frame < 10) {
                scores[rolls++] = 0;
            }
            frame++;
        } else if (c == '-') {
            scores[rolls++] = 0;
            if (frame < 10) {
                scores[rolls++] = 0;
            }
            frame++;
        } else {
            scores[rolls++] = c - '0';
            if (ball % 2 == 1 || c == '9') {
                frame++;
            }
        }
        ball++;
    }

    for (int i = 0; i < 20; i += 2) {
        totalScore += scores[i] + scores[i + 1];
        if (scores[i] == 10) {
            totalScore += scores[i + 2] + scores[i + 3];
            if (scores[i + 2] == 10) {
                totalScore += scores[i + 4];
            }
        } else if (scores[i] + scores[i + 1] == 10) {
            totalScore += scores[i + 2];
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