int scoreOfBowlingRound(const string& s) {
    int score = 0;
    int frame = 0;
    int throws[21];
    for (char c : s) {
        if (c == 'X') {
            throws[frame++] = 10;
        } else if (c == '/') {
            throws[frame - 1] = 10 - throws[frame - 1];
        } else if (c == '-') {
            throws[frame++] = 0;
        } else {
            throws[frame++] = c - '0';
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (throws[i * 2] == 10) {
            score += 10 + throws[i * 2 + 1] + throws[i * 2 + 2];
            if (throws[i * 2 + 2] == 10) {
                score += throws[i * 2 + 4];
            }
        } else if (throws[i * 2] + throws[i * 2 + 1] == 10) {
            score += 10 + throws[i * 2 + 2];
        } else {
            score += throws[i * 2] + throws[i * 2 + 1];
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << scoreOfBowlingRound(s) << endl;
    return 0;
}