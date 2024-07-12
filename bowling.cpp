int main() {
    string input;
    cin >> input;

    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames(10, 0);

    for (char c : input) {
        if (c == 'X') {
            frames[frame - 1] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame - 1] = 10 - frames[frame - 1 - 1];
            frame++;
            ball = 0;
        } else if (c == '-') {
            ball++;
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
    }

    cout << score << endl;

    return 0;
}