int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> throws(21, 0);

    for (char c : s) {
        if (c == 'X') {
            throws[ball++] = 10;
            if (frame < 10) {
                throws[ball++] = 0;
            }
        } else if (c == '/') {
            throws[ball - 1] = 10 - throws[ball - 2];
            if (frame < 10) {
                throws[ball++] = 0;
            }
        } else if (c == '-') {
            throws[ball++] = 0;
        } else {
            throws[ball++] = c - '0';
        }
    }

    for (int i = 0; frame < 10 && i < 20; i += 2, frame++) {
        if (throws[i] == 10) {
            score += 10 + throws[i+2] + throws[i+3];
            if (throws[i+2] == 10) {
                score += throws[i+4];
            }
        } else if (throws[i] + throws[i+1] == 10) {
            score += 10 + throws[i+2];
        } else {
            score += throws[i] + throws[i+1];
        }
    }

    for (int i = 18; i < 21; i++) {
        score += throws[i];
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}