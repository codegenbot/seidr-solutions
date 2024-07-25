int calculateScore(string s) {
    int score = 0, frame = 0, ball = 0;
    vector<int> frames(10, 0);

    for (char c : s) {
        if (c == 'X') {
            frames[frame++] = 10;
            if (frame == 10) break;
        } else if (c == '/') {
            frames[frame++] = 10 - frames[frame-1];
            ball = 0;
            if (frame == 10) break;
        } else if (c == '-') {
            ball = 0;
            if (frame == 10) break;
        } else {
            frames[frame] += c - '0';
            ball = !ball;
            if (!ball) frame++;
            if (frame == 10) break;
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
        if (frames[i] == 10) {
            score += frames[i+1] + frames[i+2];
        } else if (frames[i] + frames[i+1] == 10) {
            score += frames[i+2];
        }
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << calculateScore(s) << endl;
    return 0;
}