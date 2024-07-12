int calculateBowlingScore(const string& s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames(11, 0);

    for (char c : s) {
        if (c == 'X') {
            frames[frame] = 10;
            frames[frame + 1] += 10;
            frame++;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame];
            frames[frame + 1] += frames[frame];
            frame++;
            ball = 0;
        } else if (c == '-') {
            ball++;
        } else {
            frames[frame] += c - '0';
            if (ball == 1) {
                ball = 0;
                frame++;
            } else {
                ball++;
            }
        }
    }

    for (int i = 1; i <= 10; i++) {
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