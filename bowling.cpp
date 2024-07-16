int score(string s) {
    int total = 0, frame = 0, ball = 0;
    vector<int> scores(22, 0);

    for (char c : s) {
        if (c == 'X') {
            scores[frame] = 10;
            frame++;
        } else if (c == '/') {
            scores[frame] = 10 - scores[frame - 1];
            frame++;
        } else if (c == '-') {
            scores[frame] = 0;
            frame++;
        } else {
            scores[frame] = c - '0';
            ball = !ball;
            if (!ball) frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (scores[i * 2] == 10) {
            total += 10 + scores[i * 2 + 2] + scores[i * 2 + 3];
            if (scores[i * 2 + 2] == 10) total += scores[i * 2 + 4];
        } else if (scores[i * 2] + scores[i * 2 + 1] == 10) {
            total += 10 + scores[i * 2 + 2];
        } else {
            total += scores[i * 2] + scores[i * 2 + 1];
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