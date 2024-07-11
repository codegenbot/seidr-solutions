int calculateBowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames(10, 0);

    for (char c : s) {
        if (c == 'X') {
            frames[frame - 1] += 10;
            if (frame < 10) frame++;
        } else if (c == '/') {
            frames[frame - 1] += 10 - frames[frame - 1 - 1];
            if (frame < 10) frame++;
        } else if (c == '-') {
            if (frame < 10) frame++;
        } else {
            frames[frame - 1] += c - '0';
            if (ball == 1 || c == '9') {
                if (frame < 10) frame++;
                ball = 0;
            } else {
                ball = 1;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << calculateBowlingScore(s) << endl;
    return 0;
}