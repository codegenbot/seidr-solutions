int score(string s) {
    int res = 0, frame = 0, ball = 0;
    vector<int> score(21, 0);
    for (char c : s) {
        if (c == 'X') {
            score[ball] = 10;
            score[ball + 1] = 0;
            ball += 2;
            frame++;
        } else if (c == '/') {
            score[ball - 1] = 10 - score[ball - 2];
        } else if (c == '-') {
            score[ball] = 0;
            ball++;
        } else {
            score[ball] = c - '0';
            ball++;
        }
    }
    for (int i = 0; frame < 10; i += 2, frame++) {
        if (score[i] == 10) {
            res += 10 + score[i + 2] + score[i + 3];
            i--;
        } else if (score[i] + score[i + 1] == 10) {
            res += 10 + score[i + 2];
        } else {
            res += score[i] + score[i + 1];
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}