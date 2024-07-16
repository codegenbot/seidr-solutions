int calculateBowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> pins(22, 0);
    for (char c : s) {
        if (c == 'X') {
            pins[ball++] = 10;
            if (frame < 10) frame++;
        } else if (c == '/') {
            pins[ball - 1] = 10 - pins[ball - 2];
            if (frame < 10) frame++;
        } else if (c == '-') {
            pins[ball++] = 0;
        } else {
            pins[ball++] = c - '0';
        }
    }
    for (int i = 0; frame <= 10 && i < ball; ++i) {
        if (pins[i] == 10) {
            score += 10 + pins[i + 1] + pins[i + 2];
            frame++;
        } else if (pins[i] + pins[i + 1] == 10) {
            score += 10 + pins[i + 2];
            i++;
            frame++;
        } else {
            score += pins[i] + pins[i + 1];
            i++;
            frame++;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << calculateBowlingScore(s) << endl;
    return 0;
}