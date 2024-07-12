int score(string s) {
    int total = 0, frame = 0, ball = 0;
    vector<int> scores(22, 0);
    for (char c : s) {
        if (c == 'X') {
            scores[frame] = 10;
            frame += 2;
        } else if (c == '/') {
            scores[frame] = 10 - scores[frame - 1];
            frame += 1;
        } else if (c == '-') {
            scores[frame] = 0;
            frame += 1;
        } else {
            scores[frame] = c - '0';
            frame += 1;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (scores[ball] == 10) {
            total += 10 + scores[ball + 1] + scores[ball + 2];
            ball += 1;
        } else if (scores[ball] + scores[ball + 1] == 10) {
            total += 10 + scores[ball + 2];
            ball += 2;
        } else {
            total += scores[ball] + scores[ball + 1];
            ball += 2;
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