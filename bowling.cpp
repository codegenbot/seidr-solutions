int bowlingScore(string input) {
    int score = 0;
    int frame = 0;
    int throws[22];
    for (char c : input) {
        if (c == 'X') {
            throws[frame++] = 10;
            throws[frame++] = 0;
        } else if (c == '/') {
            throws[frame-1] = 10 - throws[frame-2];
        } else if (c == '-') {
            throws[frame++] = 0;
        } else {
            throws[frame++] = c - '0';
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (throws[i*2] == 10) {
            score += 10 + throws[i*2+2] + throws[i*2+3];
            if (throws[i*2+2] == 10) score += throws[i*2+4];
        } else if (throws[i*2] + throws[i*2+1] == 10) {
            score += 10 + throws[i*2+2];
        } else {
            score += throws[i*2] + throws[i*2+1];
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