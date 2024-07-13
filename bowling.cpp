int score(string input) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores(22, 0);

    for (char c : input) {
        if (c == 'X') {
            scores[ball] = 10;
            scores[ball + 1] = 10;
            scores[ball + 2] = 10;
            ball += 2;
        } else if (c == '/') {
            scores[ball] = 10 - scores[ball - 1];
        } else if (c == '-') {
            scores[ball] = 0;
        } else {
            scores[ball] = c - '0';
        }

        ball++;
    }

    for (int i = 0; frame <= 10; i += 2) {
        if (scores[i] == 10) {
            total += 10 + scores[i + 2] + scores[i + 4];
            frame++;
        } else if (scores[i] + scores[i + 1] == 10) {
            total += 10 + scores[i + 2];
            frame++;
        } else {
            total += scores[i] + scores[i + 1];
            frame++;
        }
    }

    return total;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}