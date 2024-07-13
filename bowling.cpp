int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores(21, 0);

    for (char c : s) {
        if (c == 'X') {
            scores[ball] = 10;
            if (frame < 10) {
                scores[ball + 1] = -1; // Mark as strike
            }
            ball += 2;
        } else if (c == '/') {
            scores[ball] = 10 - scores[ball - 1];
            if (frame < 10) {
                scores[ball + 1] = -2; // Mark as spare
            }
            ball += 2;
        } else if (c == '-') {
            scores[ball] = 0;
            ball++;
        } else {
            scores[ball] = c - '0';
            ball++;
        }
        if (frame < 10 && (scores[ball - 2] == 10 || scores[ball - 2] + scores[ball - 1] == 10)) {
            total += scores[ball - 2] + scores[ball - 1] + scores[ball];
        } else if (frame < 10) {
            total += scores[ball - 2] + scores[ball - 1];
        }
        if (scores[ball - 2] == 10 || scores[ball - 1] == -1 || scores[ball - 1] == -2) {
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