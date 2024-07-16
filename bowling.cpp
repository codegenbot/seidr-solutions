int bowlingScore(const string& s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (s[ball + 1] == 'X' ? 10 : (s[ball + 1] - '0'));
                score += (s[ball + 2] == 'X' ? 10 : (s[ball + 2] == '/' ? 10 - (s[ball + 1] - '0') : (s[ball + 2] - '0')));
            }
            ball++;
            frame++;
        } else if (c == '/') {
            score += (10 - (s[ball - 1] - '0'));
        } else if (c == '-') {
            // do nothing for a miss
        } else {
            score += (c - '0');
        }
        ball++;
        if (frame > 10) break;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}