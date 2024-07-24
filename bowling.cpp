int score(string bowls) {
    int totalScore = 0;
    int frame = 0;
    int bowlCount = 0;
    vector<int> scores(10, 0);

    for (char c : bowls) {
        if (c == 'X') {
            scores[frame] = 10;
            frame++;
            bowlCount = 0;
        } else if (c == '/') {
            scores[frame] = 10 - scores[frame - 1];
            frame++;
            bowlCount = 0;
        } else if (c == '-') {
            bowlCount++;
            if (bowlCount == 2) {
                frame++;
                bowlCount = 0;
            }
        } else {
            scores[frame] += c - '0';
            bowlCount++;
            if (bowlCount == 2) {
                frame++;
                bowlCount = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        totalScore += scores[i];
        if (i > 0 && (bowls[(i - 1) * 2] == 'X' || bowls[(i - 1) * 2 + 1] == '/')) {
            totalScore += scores[i];
        }
        if (i > 1 && bowls[(i - 2) * 2] == 'X' && bowls[(i - 1) * 2] == 'X') {
            totalScore += scores[i];
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