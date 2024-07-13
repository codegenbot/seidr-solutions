int bowling(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames(10, 0);

    for (char c : s) {
        if (c == 'X') {
            frames[frame-1] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame-1] = 10 - frames[frame-1];
            frame++;
            ball = 0;
        } else if (c == '-') {
            ball++;
        } else {
            if (ball == 0) {
                frames[frame-1] += c - '0';
                ball = 1;
            } else {
                frames[frame-1] += c - '0';
                frame++;
                ball = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
        if (i < 9 && frames[i] == 10) {
            if (s[i*2+1] == 'X') {
                score += frames[i+1] + frames[i+2];
            } else {
                score += frames[i+1];
            }
        } else if (i < 9 && frames[i] + frames[i+1] == 10) {
            score += frames[i+1];
        }
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowling(s) << endl;
    return 0;
}