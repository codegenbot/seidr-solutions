int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores;
    for (char c : s) {
        if (c == 'X') {
            scores.push_back(10);
            if (frame < 10) {
                scores.push_back(0);
            }
            frame++;
        } else if (c == '/') {
            scores.push_back(10 - scores.back());
        } else if (c == '-') {
            scores.push_back(0);
        } else {
            scores.push_back(c - '0');
        }
    }
    for (int i = 0; i < scores.size(); i++) {
        if (frame <= 10) {
            total += scores[i];
            if (scores[i] == 10 && frame < 10) {
                total += scores[i + 1] + scores[i + 2];
            } else if (ball % 2 == 1 || scores[i - 1] + scores[i] == 10) {
                total += scores[i + 1];
            }
            ball++;
            if (ball % 2 == 0) {
                frame++;
            }
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