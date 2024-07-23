int bowlingScore(const string& s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    bool spare = false;
    bool strike = false;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (strike ? 10 : 0) + (spare ? 10 : 0);
                strike = true;
                frame++;
                ball = 0;
            }
        } else if (c == '/') {
            score += 10 - (s[ball - 1] - '0');
            if (frame < 10) {
                score += (strike ? 10 : 0);
                spare = true;
                frame++;
                ball = 0;
            }
        } else if (c == '-') {
            if (frame < 10) {
                score += (strike ? 10 : 0) + (spare ? 10 : 0);
                frame++;
                ball = 0;
            }
        } else {
            score += c - '0';
            if (frame < 10) {
                score += (strike ? 10 : 0) + (spare ? 10 : 0);
                strike = false;
                spare = false;
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