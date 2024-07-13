int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames(10, 0);

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                frames[frame++] = 10;
            }
        } else if (c == '/') {
            score += 10 - frames[frame - 1];
            frames[frame++] = 10;
        } else if (c == '-') {
            frames[frame++] = 0;
        } else {
            score += c - '0';
            frames[frame] += c - '0';
            if (++ball % 2 == 0) {
                frame++;
            }
        }
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}