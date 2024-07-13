int bowlingScore(string input) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames(12, 0);
    for (char c : input) {
        if (c == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame] = 10;
            frames[frame-1] = 10 - frames[frame-1];
            frame++;
            ball = 0;
        } else if (c == '-') {
            ball++;
        } else {
            frames[frame] += c - '0';
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        }
    }
    for (int i = 1; i <= 10; i++) {
        if (frames[i] == 10) {
            score += 10 + frames[i+1] + frames[i+2];
        } else if (frames[i] == 20) {
            score += 20 + frames[i+2];
        } else {
            score += frames[i];
        }
    }
    return score;
}
int main() {
    string input;
    cin >> input;
    cout << bowlingScore(input) << endl;
    return 0;
}