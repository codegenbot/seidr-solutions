int score(string s) {
    int total = 0, frame = 0, ball = 0;
    vector<int> frames(10, 0);

    for (char c : s) {
        if (c == 'X') {
            frames[frame++] = 10;
        } else if (c == '/') {
            frames[frame++] = 10 - frames[frame - 1];
        } else if (c == '-') {
            frames[frame++] = 0;
        } else {
            frames[frame] += c - '0';
            if (ball % 2 == 1 || c == '9') {
                frame++;
            }
        }
        ball++;
    }

    for (int i = 0; i < 10; i++) {
        total += frames[i];
        if (frames[i] == 10 && i < 9) {
            total += frames[i + 1];
            if (frames[i + 1] == 10) {
                total += frames[i + 2];
            } else {
                total += frames[i + 2] % 10;
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