int score(string s) {
    int totalScore = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores(22, 0);

    for (char c : s) {
        if (c == 'X') {
            scores[ball] = 10;
            scores[ball + 1] = 10;
            scores[ball + 2] = 10;
            ball += 2;
        } else if (c == '/') {
            scores[ball] = 10 - scores[ball - 1];
        } else if (c == '-') {
            scores[ball] = 0;
        } else {
            scores[ball] = c - '0';
        }
        ball++;
    }

    for (int i = 0; i < 10; i++) {
        if (scores[frame] == 10) {
            totalScore += 10 + scores[frame + 1] + scores[frame + 2];
            frame++;
        } else if (scores[frame] + scores[frame + 1] == 10) {
            totalScore += 10 + scores[frame + 2];
            frame += 2;
        } else {
            totalScore += scores[frame] + scores[frame + 1];
            frame += 2;
        }
    }

    return totalScore;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}