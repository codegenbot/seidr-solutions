int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores(10, 0);

    for (char c : s) {
        if (c == 'X') {
            scores[frame - 1] = 10;
            if (frame < 10) frame++;
            if (frame == 10 && ball == 0) ball = 2;
        } else if (c == '/') {
            scores[frame - 1] = 10 - scores[frame - 1];
            if (frame < 10) frame++;
            ball = 1;
        } else if (c == '-') {
            scores[frame - 1] = 0;
            if (frame < 10) frame++;
        } else {
            scores[frame - 1] += c - '0';
            if (ball == 1) {
                if (frame < 10) frame++;
                ball = 0;
            } else {
                ball = 1;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        total += scores[i];
        if (i < 8 && scores[i] == 10 && scores[i + 1] == 10) {
            total += scores[i + 2];
        } else if (i < 9 && scores[i] == 10) {
            total += scores[i + 1];
            if (scores[i + 1] == 10) {
                total += scores[i + 2];
            }
        } else if (i < 9 && scores[i] + scores[i + 1] == 10) {
            total += scores[i + 1];
        }
    }

    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}