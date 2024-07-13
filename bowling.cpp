int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames(10, 0);

    for (char c : s) {
        if (c == 'X') {
            frames[frame - 1] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame - 1] = 10 - frames[frame - 1];
            frame++;
            ball = 0;
        } else if (c == '-') {
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        } else {
            frames[frame - 1] += c - '0';
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
        if (i < 9 && frames[i] == 10) {
            score += frames[i + 1];
            if (frames[i + 1] == 10) {
                score += frames[i + 2];
            }
        } else if (i < 9 && frames[i] + frames[i + 1] == 10) {
            score += frames[i + 2];
        }
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}