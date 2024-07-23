int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores(21, 0);
    for (char c : s) {
        if (c == 'X') {
            scores[ball] = 10;
            ball++;
            frame++;
        } else if (c == '/') {
            scores[ball-1] = 10 - scores[ball-2];
            frame++;
        } else if (c == '-') {
            scores[ball] = 0;
            ball++;
        } else {
            scores[ball] = c - '0';
            ball++;
            if (frame % 2 == 0) {
                if (scores[ball-1] + scores[ball-2] == 10) {
                    scores[ball-2] = 10;
                }
                frame++;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        total += scores[i*2] + scores[i*2+1] + scores[i*2+2];
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}