int score(string s) {
    int total = 0;
    int frame = 1;
    int bowl = 0;
    vector<int> scores(22, 0);

    for (char c : s) {
        if (c == 'X') {
            scores[bowl] = 10;
            scores[bowl + 1] = 0;
            bowl += 2;
            frame++;
        } else if (c == '/') {
            scores[bowl] = 10 - scores[bowl - 1];
            frame++;
            bowl += 2;
        } else if (c == '-') {
            scores[bowl] = 0;
            bowl++;
        } else {
            scores[bowl] = c - '0';
            bowl++;
        }
    }

    for (int i = 0; frame <= 10; i += 2, frame++) {
        if (scores[i] == 10) {
            total += 10 + scores[i + 2] + scores[i + 3];
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
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}