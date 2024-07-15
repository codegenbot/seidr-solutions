int score(string s) {
    int total = 0;
    int frame = 1;
    int bowl = 0;
    vector<int> scores(21, 0);

    for (char c : s) {
        if (c == 'X') {
            scores[bowl] = 10;
            if (frame < 10) {
                scores[bowl + 1] = 10;
                scores[bowl + 2] = 10;
            }
            frame++;
        } else if (c == '/') {
            scores[bowl] = 10 - scores[bowl - 1];
        } else if (c == '-') {
            scores[bowl] = 0;
        } else {
            scores[bowl] = c - '0';
        }
        bowl++;
    }

    for (int i = 0; i < 10; i++) {
        if (scores[i * 2] == 10) {
            total += 10 + scores[i * 2 + 2] + scores[i * 2 + 4];
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