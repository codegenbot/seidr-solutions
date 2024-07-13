int score(string s) {
    int total = 0, frame = 0, ball = 0;
    vector<int> scores(22, 0);
    for (char c : s) {
        if (c == 'X') {
            scores[ball++] = 10;
            scores[ball++] = 0;
        } else if (c == '/') {
            scores[ball++] = 10 - scores[ball - 1];
        } else if (c == '-') {
            scores[ball++] = 0;
        } else {
            scores[ball++] = c - '0';
        }
    }
    for (int i = 0; frame < 10; i += 2, frame++) {
        if (scores[i] == 10) {
            total += 10 + scores[i + 2] + scores[i + 4];
            i--;
        } else if (scores[i] + scores[i + 1] == 10) {
            total += 10 + scores[i + 2];
        } else {
            total += scores[i] + scores[i + 1];
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