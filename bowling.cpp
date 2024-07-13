int score(string s) {
    int total = 0;
    int frame = 0;
    int rolls = 0;
    vector<int> scores(21, 0);
    for (char c : s) {
        if (c == 'X') {
            scores[rolls] = 10;
            rolls++;
        } else if (c == '/') {
            scores[rolls - 1] = 10 - scores[rolls - 1];
        } else if (c == '-') {
            scores[rolls] = 0;
            rolls++;
        } else {
            scores[rolls] = c - '0';
            rolls++;
        }
    }
    for (int i = 0; frame < 10; i += 2) {
        if (scores[i] == 10) {
            total += 10 + scores[i + 1] + scores[i + 2];
            frame++;
        } else if (scores[i] + scores[i + 1] == 10) {
            total += 10 + scores[i + 2];
            i++;
            frame++;
        } else {
            total += scores[i] + scores[i + 1];
            frame++;
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