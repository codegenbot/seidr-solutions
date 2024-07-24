int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames(10, 0);

    for (char c : s) {
        if (c == 'X') {
            frames[frame - 1] = 10;
            frame++;
            if (frame > 10) break;
        } else if (c == '/') {
            frames[frame - 1] = 10 - frames[frame - 1];
            frame++;
            ball = 0;
            if (frame > 10) break;
        } else if (c == '-') {
            ball++;
        } else {
            frames[frame - 1] += c - '0';
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
                if (frame > 10) break;
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
    cout << bowlingScore(s) << endl;
    return 0;
}