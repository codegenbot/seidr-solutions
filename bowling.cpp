int bowlingScore(const string& s) {
    int score = 0, frame = 0, ball = 0;
    vector<int> frames(10, 0);
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                frames[frame++] = 10;
            } else {
                frames[frame] += 10;
            }
            ball = 0;
        } else if (c == '/') {
            score += 10 - frames[frame - 1];
            frames[frame++] = 10;
            ball = 0;
        } else if (c == '-') {
            ball++;
        } else {
            score += c - '0';
            if (ball == 1) {
                score += c - '0';
                frames[frame++] = c - '0';
                ball = 0;
            } else {
                frames[frame] += c - '0';
                ball++;
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