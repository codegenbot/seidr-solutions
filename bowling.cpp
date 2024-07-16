int main() {
    string bowls;
    cin >> bowls;

    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames(10, 0);

    for (char c : bowls) {
        if (c == 'X') {
            frames[frame - 1] = 10;
            if (frame < 10) frame++;
            if (frame == 10 && ball == 0) ball++;
        } else if (c == '/') {
            frames[frame - 1] = 10 - frames[frame - 1];
            if (frame < 10) frame++;
            ball = 0;
        } else if (c == '-') {
            ball++;
        } else {
            frames[frame - 1] += c - '0';
            if (ball == 1) {
                if (frame < 10) frame++;
                ball = 0;
            } else {
                ball++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
    }

    cout << score << endl;

    return 0;
}