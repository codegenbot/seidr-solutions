int score(string s) {
    int total = 0, frame = 0, ball = 0;
    vector<int> frames(10, 0);

    for (char c : s) {
        if (c == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame - 1];
            frame++;
            ball = 0;
        } else if (c == '-') {
            ball = 0;
        } else {
            frames[frame] += c - '0';
            ball++;
            if (ball == 2 || c == 'X') {
                frame++;
                ball = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        total += frames[i];
        if (frames[i] == 10 && i < 9) {
            total += frames[i + 1];
            if (frames[i + 1] == 10) {
                total += frames[i + 2];
            }
        } else if (frames[i] == 10 && i == 9) {
            total += frames[i + 1] + frames[i + 2];
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