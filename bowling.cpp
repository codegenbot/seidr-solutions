int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores(21, 0);

    for (char c : s) {
        if (c == 'X') {
            scores[ball] = 10;
            scores[ball + 1] = -1; // Strike
            ball += 2;
        } else if (c == '/') {
            scores[ball] = 10 - scores[ball - 1];
            ball++;
        } else if (c == '-') {
            scores[ball] = 0;
            ball++;
        } else {
            scores[ball] = c - '0';
            ball++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (scores[frame] == -1) {
            total += 10 + scores[frame + 1] + scores[frame + 2];
            frame++;
        } else if (scores[frame] + scores[frame + 1] == 10) {
            total += 10 + scores[frame + 2];
            frame += 2;
        } else {
            total += scores[frame] + scores[frame + 1];
            frame += 2;
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